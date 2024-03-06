
#include  "shell.h"


void prompt_display(char *pathname)
{
	ssize_t num_of_xter;
	char * user_input = NULL;
	size_t n = 0;

	{
		printf("Piness$ ");
	

	num_of_xter = getline(&user_input, &n, stdin);

	if (num_of_xter == -1)
		perror("reached end of line");


	/*if(user_input == '\n')
		user_input == '\0'; */
	
	tokenise(user_input, pathname);
	}
	free(user_input);
}
