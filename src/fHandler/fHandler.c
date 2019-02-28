#include"fHandler.h"

int addLineToFileList(fileLine *fLine, fileList *fList)
{
	
	return -1;
}

fileList * getLineFromFile(nodeList *path, int ln)
{
	fileLine *line = malloc(sizeof(fileLine));
	char *pathStr = malloc((sizeof(char) * path->size));
	listToStr(path, pathStr, 0, path->size);	
	FILE *fp = fopen(pathStr, "r");	
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
