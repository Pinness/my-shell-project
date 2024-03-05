#include "shell.h"

char *tokenise(char *string)
{
	/**char *string; **/
	const char *delim = " ";
	char *token;

	token = strtok(string, delim);

	  /**execute the token generated*/
	/**printf("%s\n", token); the command is ot suppose to be printed out**/
	/**token = strtok(NULL, delim);
	printf("%s ", token);
	token = strtok(NULL, delim);
	printf("%s\n", token);**/
	/**while (token != NULL)**/
	while ((token = strtok(NULL, delim)) != NULL)
	{
		/**token = strtok(NULL, delim);*/
	
		/**printf("%s\n", token);  instead of printing i want to execute**/
		exec(token);
	}

	

	return (token);
}
