require rust-snapshot.inc

## This is information on the rust-snapshot (binary) used to build our current release.
## snapshot info is taken from rust/src/stage0.txt
## TODO: find a way to add additional SRC_URIs based on the contents of an
##       earlier SRC_URI.
RS_VERSION = "1.46.0"
CARGO_VERSION = "0.47.0"

# TODO: Add hashes for other architecture toolchains as well. Make a script?
SRC_URI[rust-std-snapshot-x86_64.sha256sum] = "e631d80cb03539769c041ee4566e94e36a271d4b3cdd149e1447d1f77fda979c"
SRC_URI[rustc-snapshot-x86_64.sha256sum] = "6edcec5367f9fcaee78cbcabfb1f6757fa95d7fd2c0853913223fe20ad534f12"
SRC_URI[cargo-snapshot-x86_64.sha256sum] = "9da5c4888c6025fa174eaef330337e49666ca9562f876a34d40c03a80d432b8d"
