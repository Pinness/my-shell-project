#include "shell.h"



int main (int argc, char *argv[])
{
	char *pathname = "/usr/bin/ls";
	
	prompt_display(pathname);
	return (0);
}
