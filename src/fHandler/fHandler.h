#ifndef FHANDLER_H
#define FHANDLER_H

//include
#include "../node/node.h"
#include <stdbool.h>

//Defines
#define DEBUG

typedef struct 
{
	struct Node *head;
	struct Node *tail;
	struct NodeList *next;
	uint8_t size;
	fpos_t *loc;	
}fileLine;

typedef struct 
{
	struct fileLine *head;
	struct fileLine *tail;
	struct fileLine *next;
	uint8_t size;
}fileList;


//fuctions
int addLineToFileList(fileLine *fLine, fileList *fList);
fileLine * getLineFromFile(nodeList *path, int ln);
nodeList * makeTemplatePath(char *pathToProgram, char *templateName);
#endif
