#ifndef FHANDLER_H
#define FHANDLER_H

#include "../node/node.h"
//Defines
typedef struct 
{
	struct Node *head;
	struct Node *tail;
	struct NodeList *next;
	uint8_t size;
	fpos_t loc;	
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
fileList * getLineFromFile(nodeList *path, int ln);
nodeList * makeTemplatePath(char *pathToProgram, char *templateName);
#endif
