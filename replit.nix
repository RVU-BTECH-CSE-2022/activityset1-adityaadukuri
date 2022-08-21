{ pkgs }: {
	deps = [
		pkgs.aerospike
  pkgs.vim
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}