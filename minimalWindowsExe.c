#pragma comment(lib, "kernel32.lib")

__declspec(dllimport) void __stdcall ExitProcess(unsigned int uExitCode);

void myMain(void) {
	ExitProcess(12);
}

/*
commands to run: test.exe
set to release x64.
set c language to c17.
set subsystem to console.
set c/c++ > output files > assembler output > assembly, machine code and source.
linker > input > ignore all default libraries > yes.
c/c++ > code generation > security check > disable security check.
c/c++ > general > sdl checks > no
linker > advanced > entry point > myMain (or whatever)
echo %ERRORLEVEL%
*/
