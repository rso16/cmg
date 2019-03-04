#include"fHandler.h"

int addLineToFileList(fileLine *fLine, fileList *fList)
{
	
	return -1;
}

fileList * getLineFromFile(nodeList *path, int ln)
{
	//make char array of path
	fileLine *line = malloc(sizeof(fileLine));
	char *pathStr = malloc((sizeof(char) * path->size));
	listToStr(path, pathStr, 0, path->size);	
	FILE *fp = fopen(pathStr, "r");	
	
	if(fp = NULL)
	{
		printf("Error opening file\n");
		return NULL;
	}
	else
	{
		//get to line
				
		//get line	
	}	
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
