#ifndef _SHELL_H_
#define _SHELL_H_



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


void prompt_display(void);
int main(int argc, char *argv[]);
/**char *tokenise(char *string, char *pathname);**/
int exec(char *pathname);



#endif
