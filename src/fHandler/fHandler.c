#include"fHandler.h"

int addLineToFileList(fileLine *fLine, fileList *fList)
{
	
	return -1;
}

fileList * getLineFromFile(nodeList *path, int ln)
{
	fileLine *line = malloc(sizeof(fileLine));	
	printf("test\n");			
	
	return NULL;
}

nodeList * makeTemplatePath(char *pathToProgram, char *templateName)
{
	nodeList *fullpath = malloc(sizeof(nodeList));
	printf("pathToProgram = %s, templateName = %s\n", pathToProgram, templateName);
	addStrToList(fullpath, pathToProgram);
	addStrToList(fullpath,"/../templates/");
	addStrToList(fullpath,templateName);
	printStrList(fullpath);
	return fullpath;	
}
