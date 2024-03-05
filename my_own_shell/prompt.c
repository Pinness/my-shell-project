
#include  "shell.h"


void prompt_display(void)
{
	ssize_t num_of_xter;
	char * user_input = NULL;
	size_t n = 0;



	while (1)
	{
		printf("Piness$ ");
	

	num_of_xter = getline(&user_input, &n, stdin);
	printf("%s\n", user_input);

	if (num_of_xter == -1)
		perror("reached end of line");


	/*if(user_input == '\n')
		user_input == '\0'; */
	
	tokenise(user_input);}

	free(user_input);
}
