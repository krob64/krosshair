let
  # 1. Import nixpkgs
  pkgs = import <nixpkgs> { };

  buildInputs = with pkgs; [
    vulkan-headers
    gcc
    gnumake
    cmake
  ];
in
pkgs.mkShell {
  inherit buildInputs;
  LD_LIBRARY_PATH = pkgs.lib.makeLibraryPath buildInputs;
  shellHook = ''
    # Force C builds by setting CC explicitly to gcc
    export CC=gcc
    echo "cc $(cc --version | head -n1)"
    echo "gcc $(gcc --version | head -n1)"
    echo "make $(make --version | head -n1)"
    unset TEMP TMP TEMPDIR TMPDIR
  '';
}
