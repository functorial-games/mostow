# M2 evidence and pending boundaries

Host geometry: PASS. Base realization: PASS. Analytic all-time motion bound:
PASS. Actual emitted-float poses/corners: PASS. Intrinsic area refinement:
PASS. Shared GLES rendering in Mesa llvmpipe host EGL: PASS.

Both Android native ABIs build via the explicit NDK compatibility route.
Signing/packaging and producer receipts are recorded separately. The shared
producer gate requires a merged registration of `org.isomorphisms.mostow`
with the established public test certificate. No pending gate is a PASS.

A1 installation, launch, touch, background/resume, five-minute frame/memory
report, and actual PowerVR capture: NOT_RUN. C67 corresponding acceptance:
NOT_RUN. This container has no established physical-device channel. No
compiler or build tool is to be installed on either phone.

The host render deliberately uses the same shaders, fixture, kernel, and
camera as the Android application. Its purpose is inspecting source output;
it cannot establish PowerVR behavior or phone touch comfort. The current
patch is a faceted first realization, with small folds near the outer edge;
it is not claimed to be a unique smooth shape or collision-free embedding.

## Physical session after producer acceptance

Use the exact A1 artifact/digest first. Open the app, watch separated folds
for 20–30 seconds, toggle rings/info, orbit, pinch, pause, background, and
return. Record whether the phase remains continuous and whether both sides
remain legible. Capture genuine device output, device identity, GPU, and APK
digest. Run for five foreground minutes and record native `FRAME_RENDER_MS`
and `FRAME_INTERVAL_MS` separately, plus process memory. Target the stated
95th-percentile frame budget of 33.3 ms; report an observed failure honestly.
Repeat on C67 using its own arm64 artifact. One device does not qualify the
other. Replacement installs preserve application identity; do not uninstall
an existing package to work around a signer/version conflict.
