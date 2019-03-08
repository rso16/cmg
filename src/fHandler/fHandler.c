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
	int ret = listToStr(path, pathStr, 0, path->size - 1);	
	printf("ret  = %d\n", ret);
	printf("pathStr = %s\n",pathStr);
	
	//open file
	FILE *fp = fopen(pathStr, "r");	
	
	//check if file is properly opened	
	if(fp == NULL)
	{
		printf("Error opening file\n");
		return NULL;
	}
	else
	{
		printf("Opening File\n");		
		//get to line
						
		//get line	
		char c = 0;
		int lCounter = 0;	
		bool firstLetter = true; 
		bool done = false;
		
		while(!done)
		{
			//get character
			c = fgetc(fp);

			//check if we're on the desired line
			if(ln == lCounter)
			{
				//check if it is the first letter of the line
				if(fistLetter)
				{
					//save pos
					fgetpos(fp, line->loc);
					firstLetter = false;

				}
				//add letter to list

			}
			
			//check if end of line
			if(c == '\n')
			{
				//set done
				done = true;	
			}


		}


//		while(!endOfFile)
//		{
//			c = fgetc(fp);
//			if(c != )
//			{
//				if(lCounter == ln)
//				{
//					if(firstLetter)
//					{
//						printf("first letter\n");
//						line->loc = malloc(sizeof(fpos_t));
//						fgetpos(fp, line->loc);
//						firstLetter = false;
//					}
//					addDataToList((nodeList *) line, c);
//					printf("%c", c);
//				}
//				if(c == '\n')
//				{
//					lCounter++;
//				}
//			}
//			else
//			{
//				endOfFile = true;		
//			}
//			printf("test");
//		}
//		printStrList((nodeList *)line);	
//		return line;
//	}	
}

nodeList * makeTemplatePath(char *pathToProgram, char *templateName)
{
	nodeList *fullpath = malloc(sizeof(nodeList));
	printf("pathToProgram = %s, templateName = %s\n", pathToProgram, templateName);
	addStrToList(fullpath, pathToProgram);
	removeTailFromListTill(fullpath, '/');
	addStrToList(fullpath,"../templates/");
	addStrToList(fullpath,templateName);
	printf("Test 1\n");
	printStrList(fullpath);
	return fullpath;	
}
