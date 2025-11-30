{
  pkgs ? import <nixpkgs> { },
}:

with pkgs;

stdenv.mkDerivation {
  pname = "krosshair";
  version = "main";

  src = fetchFromGitHub {
    owner = "krob64";
    repo = "krosshair";
    rev = "ccf2e7a8b1785156769971490a6605772ddbeb1c";
    sha256 = "sha256-IbNtURAZJQ5V+DtMa4v1o8RnPToH5YEM2j45LEJQux4=";
  };

  nativeBuildInputs = [
    gnumake
    pkg-config
  ];

  buildInputs = [
    gcc
    vulkan-headers
    vulkan-loader
    glslang
    pkg-config
  ];

  # Use upstream Makefile
  buildPhase = ''
    make all
  '';

  installPhase = ''
    # Create output directories
    mkdir -p "$out/lib"
    mkdir -p "$out/share/vulkan/implicit_layer.d"
    mkdir -p "$out/share/krosshair/crosshairs"

    # Install library
    cp -v lib/krosshair.so "$out/lib/"

    # Modify krosshair.json so library_path points to the store path under $out
    # (replace the default /usr/lib/krosshair/krosshair.so with $out/lib/krosshair.so)
    sed 's|"/usr/lib/krosshair/krosshair.so"|"'$out'/lib/krosshair.so"|g' krosshair.json > "$out/share/vulkan/implicit_layer.d/krosshair.json"

    # Copy crosshair assets
    if [ -d crosshairs ]; then
      cp -r crosshairs/* "$out/share/krosshair/crosshairs/" || true
    fi
  '';

  meta = with lib; {
    description = "krosshair: a crosshair overlay (built from https://github.com/krob64/krosshair)";
    homepage = "https://github.com/krob64/krosshair";
    license = licenses.unfree; # project didn't specify a license
    maintainers = [ chrisheib ];
  };
}
