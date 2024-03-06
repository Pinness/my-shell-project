#include "shell.h"

int exec(char *pathname, char *command)
{	

	char *const argv[] = {*command, NULL};
	 char *const envp[] = {NULL};

	/**char *token = tokenise(user_input);**/ 


	execve(pathname, argv, envp);
	return (0);
}
