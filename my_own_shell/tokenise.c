#include "shell.h"

char *tokenise(char *string)
{
	/**char *string; **/
	const char *delim = " ";
	char *token;

	token = strtok(string, delim);
	printf("%s\n", token);
	/**token = strtok(NULL, delim);
	printf("%s ", token);
	token = strtok(NULL, delim);
	printf("%s\n", token);**/
	/**while (token != NULL)**/
	while ((token = strtok(NULL, delim)) != NULL)
	{
		/**token = strtok(NULL, delim);*/
		         printf("%s\n", token);
	}

	

	return (token);
}
