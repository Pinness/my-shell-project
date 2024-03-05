#include "shell.h"

int exec(void)
{
	char *token = tokenise(argv[0]);
	/**char *const pathname = "/usr/bin/ls";**/
	char *const pathname = "/usr/bin/argv[0]";
	/**char *const argv[] = {"ls", NULL}; it will display files**/
	/**char *const argv[] = {"argv[0]", NULL};**/
	char *const argv[] = {"token", NULL};
	char *const envp[] = {NULL};
	execve(pathname, argv, envp);
	return (0);
}
