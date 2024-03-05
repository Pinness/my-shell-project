#include "shell.h"

int exec(char *user_input)
{
	char *const pathname = "token[0]";
	char *const argv[] = {"token[1]", NULL};
	 char *const envp[] = {NULL};

	char *token = tokenise(user_input); 
	printf("%s\n", token);


	execve(pathname, argv, envp);
	return (0);
}
