# Living-sheet construction attempt

## Intended values and types

`HyperbolicPoint` is a radius/angle pair in a curvature −1 disk of radius 2.
`IntrinsicMesh` is an oriented triangulated abstract disk with stable vertex IDs,
exact target edge lengths, and Euclidean comparison metrics per face.
`SpatialRealization` assigns a Euclidean 3-vector to each vertex; intersections
do not identify vertices. `StretchInterval` contains the two singular values
of the reference-to-spatial differential. `MotionCertificate` bounds all phase
combinations of three coherent modes, including arithmetic error.

Central operations: hyperbolic_distance(Point, Point, curvature_scale) → Length;
comparison_face(Lengths) → Checked ReferenceMatrix;
triangle_stretch(ReferenceMatrix, Positions) → Checked StretchInterval;
realize(Mesh, Seed, ContinuationParameters) → Positions and ResidualHistory;
sample(Mesh, Fixture, ActiveTime, CallerBuffers) → Checked Diagnostics.

The generator performs file output. Intrinsic geometry, constraint residuals,
sampling, and distortion calculations are pure computations over caller data.
Errors include capacity exhaustion, degenerate comparison face, collapsed
spatial face, nonfinite inputs, and a failed metric certificate. No failed
realization is an accepted fixture.

## Source and target boundary

The user's explicit Mostow source choice is compositional ICKY C with the
Seifert syntax-only NDK compatibility boundary. That choice governs this
mathematical generator and kernel; this is not an Idriç compiler claim.
The mathematical implementation is not duplicated in a Python optimizer.
The copied normalization program is existing Seifert infrastructure, not new
mathematical code. New orchestration is Grease.

Build host: this disposable x86-64 Linux container. Runtime consumers: MIRO A1
armeabi-v7a and MIRO C67 arm64-v8a. Neither phone is a compilation host.

## Experiments and evidence

Pending: intrinsic mesh construction, constrained realization, analytic motion
certificate, host rendering, paired NDK build, and physical acceptance.
Substantive failed configurations and their residuals will be retained here or
in `qualification/m2`; they must not be reclassified as accepted fixtures.

## Language work

Direct ICK compilation of this exact application source on both Android ABIs
is not yet qualified. The current explicit route normalizes only `←` assignment
to ordinary C for NDK compilation. A future ICK acceptance must compile the
unmodified source and pass the same kernel tests and paired artifact checks.
