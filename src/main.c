//made by RSO16
//includes
#include <stdio.h>
#include <limits.h>
#include <unistd.h>

//defines
#define gotoxy(x,y) printf("\033[%d;%dH", (x), (y))

char cmd1[5] = {0x1B, '[', '2', 'J', '\0'}; // Clear screen
char cmd2[4] = {0x1B, '[', 'f', '\0'}; // Cursor home

int main(int argc, char **argv)
{
	char cwd[PATH_MAX];
	getcwd(cwd, sizeof(cwd));
	printf("cwd = %s\n", cwd);
	

	return 0;
}

