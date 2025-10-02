/*++

LibreWin

You may only use this code if you agree to the terms of the LibreWin Source Code License agreement (GNU GPL v3) (see LICENSE).
If you do not agree to the terms, do not use the code.


	PROJECT: LibreWin Userspace Components
	FILE: hello.c
	DESCRIPTION: A Hello World Native NT Application.
	AUTHOR: @KapTheGuy

--*/

#include "appinclude/print.h"

void _start()
{
	RtlCliDisplayString("Hello, World\n");
}
