all:
	echo "PLEASE ENTER OS IN MAKEFILE ARGUMENTS"

windows:
	gcc main/main.c  -o sim.exe
linux:
	gcc main/main.c -o sim.a
#no mac compilation with makefile