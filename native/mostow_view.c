/* Camera/input adapter. Follows Seifert's shared draw/pick matrix boundary. */
#include "mostow_view.h"
#include <math.h>
#include <string.h>
void mostow_view_release(MostowView *view)
{ view->primary_id = -1; view->secondary_id = -1; view->pinch_distance = 0; }
void mostow_view_init(MostowView *view)
{
    memset(view,0,sizeof(*view)); view->yaw = 0.45f;
    view->pitch = -0.7f; view->distance = 9.0f; mostow_view_release(view);
}
void mostow_view_orbit(MostowView *view, float x, float y, int short_side)
{
    if (short_side <= 0 || !isfinite(x) || !isfinite(y)) return;
    view->yaw += 4.0f*(x-view->last_x)/(float)short_side;
    view->pitch = fmaxf(-1.5f,fminf(1.5f,view->pitch+4.0f*(y-view->last_y)/(float)short_side));
    view->last_x = x; view->last_y = y;
}
void mostow_view_zoom(MostowView *view, float distance)
{
    if (!(isfinite(distance) && distance > 1.0f)) return;
    if (view->pinch_distance > 1.0f)
        view->distance = fmaxf(4.0f,fminf(20.0f,view->distance*view->pinch_distance/distance));
    view->pinch_distance = distance;
}
void mostow_view_matrix(const MostowView *view,int width,int height,float matrix[16],float rotation[9])
{
    float cy = cosf(view->yaw), sy = sinf(view->yaw);
    float cp = cosf(view->pitch), sp = sinf(view->pitch);
    float r[9] = {cy,sp*sy,-cp*sy, 0,cp,sp, sy,-sp*cy,cp*cy};
    memcpy(rotation,r,sizeof(r));
    float projection[16] = {0};
    float factor = 1.0f/tanf(0.48f);
    projection[0] = factor*(float)height/(float)width; projection[5] = factor;
    projection[10] = -(50.0f+0.1f)/(50.0f-0.1f); projection[11] = -1.0f;
    projection[14] = -2.0f*50.0f*0.1f/(50.0f-0.1f);
    float model[16] = {r[0],r[1],r[2],0,r[3],r[4],r[5],0,r[6],r[7],r[8],0,0,0,-view->distance,1};
    for (unsigned column = 0; column < 4; ++column)
        for (unsigned row = 0; row < 4; ++row) {
            matrix[column*4+row] = 0;
            for (unsigned k = 0; k < 4; ++k)
                matrix[column*4+row] += projection[k*4+row]*model[column*4+k];
        }
}
