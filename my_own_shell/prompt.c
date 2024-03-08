
#include  "shell.h"


void prompt_display()
{
	ssize_t num_of_xter;
	char * user_input = NULL;
	size_t n = 0;
	char *token;
	char *delim = " \n";
	pid_t new_proces;


	printf("Piness$ ");
	
	num_of_xter = getline(&user_input, &n, stdin);

	if (num_of_xter == -1)
		perror("reached end of line");


	/*if(user_input == '\n')
		user_input == '\0'; */
	
	token = strtok(user_input, delim);
	

	new_proces = fork();
	if (new_proces == 0)
	{
		if(exec(token) == -1);
		perror("execve");
	}

	free(user_input);
}
