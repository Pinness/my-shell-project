#include "shell.h"

int exec(char *pathname)
{	

	char *const argv[] = {pathname, NULL};
	 char *const envp[] = {NULL};

	/**char *token = tokenise(user_input);**/ 


	execve(pathname, argv, envp);
	perror("execve");

	return -1;

}
