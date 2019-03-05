#include"fHandler.h"

int addLineToFileList(fileLine *fLine, fileList *fList)
{
	
	return -1;
}

fileLine * getLineFromFile(nodeList *path, int ln)
{
	//make char array of path
	fileLine *line = malloc(sizeof(fileLine));
	char *pathStr = malloc((sizeof(char) * path->size));
	listToStr(path, pathStr, 0, path->size);	
	
	//ope file
	FILE *fp = fopen(pathStr, "r");	
	
	//check if file is properly opened	
	if(fp == NULL)
	{
		printf("Error opening file\n");
		return NULL;
	}
	else
	{
		
		//get to line
						
		//get line	
		char c = 0;
		int lCounter = 0;	
		bool firstLetter = false;
		while(c != '\0')
		{
			c = fgetc(fp);
			if(lCounter == ln)
			{
				if(firstLetter)
				{
					line->loc = malloc(sizeof(fpos_t));
					fgetpos(fp, line->loc);
					firstLetter = true;
				}
				
				addDataToList((nodeList *) line, c);				
			}
			if(c == '\0')
			{
				lCounter++;
			}
		}
		
		return line;
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
