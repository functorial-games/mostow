# Authoritative source and compatibility build

The first-party mathematical source is `icky/mostow_sheet.c`; the host-only
fixture construction is `icky/realize_sheet.c`. Both use the qualified `←`
assignment spelling. The copied Seifert lexical adapter changes that token
only outside strings/comments and rejects unsupported executable glyphs.
Its legacy `SEIFERT_C_*` output names describe the reused adapter, not a
Seifert geometry implementation. Generated ordinary C under `build/` is not
an independently maintained mathematical implementation.

Current application objects use Android NDK r29, revision 29.0.14206865, API 21.
This is explicitly NDK compatibility, not direct ICK compilation. The inspected
ICK revision is recorded in `ci/build-toolchain.tsv`; it has not compiled this
exact application source for either Android ABI. No claim about ICK's general
capabilities follows from this unqualified application boundary.

The renderer/NativeActivity adapters are ordinary native C. They do not own
hyperbolic distances or distortion formulas. Camera and shared matrix code
are host-testable. New orchestration uses Grease; the established canonical
Android packager remains at its existing Bash interface. Neither device is a
compilation host. Each build produces both maintained phone ABIs.

The fixture's 1,023 positions are data emitted by the authoritative host
generator, not another mathematical implementation. To regenerate, invoke
`tools/generate-fixture.grease` through an explicitly verified Grease runtime,
passing the absolute checkout path. It installs only an accepted candidate.
The deterministic continuation is a preprocessing construction; no optimizer
runs in the application and it does not define the continuous motion.

The local Grease artifact needs `ASAN_OPTIONS=detect_leaks=0` in this ptrace
container because LeakSanitizer cannot inspect its process tree. This is not
a leak-check PASS. Grease syntax and execution were checked separately from
the geometry and from device evidence.
