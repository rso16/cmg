//made by RSO16
//includes
#include <stdio.h>
#include <limits.h>
#include <unistd.h>

//defines
#define COMMANDO argv[1]

//macros
//macro for canging the cursor
#define gotoxy(x,y) printf("\033[%d;%dH", (x), (y)) 

char cmd1[5] = {0x1B, '[', '2', 'J', '\0'}; // Clear screen
char cmd2[4] = {0x1B, '[', 'f', '\0'}; // Cursor home

int main(int argc, char **argv)
{
	if(argc < 1)
	{	
		//gen make file
		printf("generating makefile\n");
	}
	else
	{
		printf("testing\n");
		if(COMMANDO == "init")
		{
			printf("initializing\n");
		}	
	}	
//	char cwd[PATH_MAX];
//	getcwd(cwd, sizeof(cwd));
//	printf("cwd = %s\n", cwd);
	

	return 0;
}

