
#include  "shell.h"


void prompt_display()
{
	ssize_t num_of_xter;
	char * user_input = NULL;
	size_t n = 0;
	char *token;
	char *delim = " \n";

	
		printf("Piness$ ");
	

	num_of_xter = getline(&user_input, &n, stdin);

	if (num_of_xter == -1)
		perror("reached end of line");


	/*if(user_input == '\n')
		user_input == '\0'; */
	
	token = strtok(user_input, delim);
	

	exec(token);

	free(user_input);
}
