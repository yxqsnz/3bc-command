{ pkgs ? import <nixpkgs> { } }:
with pkgs;
mkShell {
  # nativeBuildInputs is usually what you want -- tools you need to run
  nativeBuildInputs = [ gcc cmake curl curl.dev json_c json_c.dev ];
}
