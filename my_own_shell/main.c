#include "shell.h"



int main (int argc, char *argv[])
{
	pid_t processid = fork();
	
	prompt_display();
	
	printf("%s is the first string\n %d is number of arg\n", argv[0], argc);

	/**pid_t processid = fork()**/
	
	if (processid == 0)
	{
		printf("%d, %d\n", getpid(), processid);
	
		exec(*argv);
	}
	/** tokee();*/
	else
	{
		prompt_display();
	/**tokenise();*/
	
	}
	return (0);
}
