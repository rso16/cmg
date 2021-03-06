//made by RSO16

//includes
#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>
#include "node/node.h"


//defines
#define PATH		argv[0]
#define COMMAND		argv[1]
#define TEMPLATE 	argv[2]

//macros
//macro for canging the cursor
#define gotoxy(x,y) printf("\033[%d;%dH", (x), (y)) 

//function prototypes
void init(char *pathToProgram,char *templateName);

//vt commands
char cmd1[5] = {0x1B, '[', '2', 'J', '\0'}; // Clear screen
char cmd2[4] = {0x1B, '[', 'f', '\0'}; // Cursor home

//global vars
nodeList *fullpath;



int main(int argc, char **argv)
{
    fullpath = malloc(sizeof(nodeList));
    printf("%s\n", argv[0]); 
	if(argc < 2)
	{	
		//gen make file
		printf("generating makefile\n");
	}
	else
	{
		printf("first param = %s\n", argv[1]);
		if(strcmp(COMMAND, "init") == 0)
		{
			printf("initializing\n");
				
			init(PATH, TEMPLATE);
		}	
	}	
//	char cwd[PATH_MAX];
//	getcwd(cwd, sizeof(cwd));
//	printf("cwd = %s\n", cwd);
	

	return 0;
}

void init(char *pathToProgram,char *templateName)
{
	FILE *fp;
	printf("pathToProgram = %s, templateName = %s\n", pathToProgram, templateName);
	printf("test 0\n");
	addStrToList(fullpath, pathToProgram);
	addStrToList(fullpath,"/../templates/");
	addStrToList(fullpath,templateName);
	printStrList(fullpath);
	char *pathStr = malloc(sizeof(char) * (fullpath->size + 1));
	listToStr(fullpath, pathStr, 0, fullpath->size);	
	printf("pathStr = %s\n", pathStr);	
	
	fp = fopen(pathStr, "r");
	
}
