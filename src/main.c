#include <stdio.h>
#define gotoxy(x,y) printf("\033[%d;%dH", (x), (y))

char cmd1[5] = {0x1B, '[', '2', 'J', '\0'}; // Clear screen
char cmd2[4] = {0x1B, '[', 'h', '\0'}; // Cursor home
char cmd3[] = {0x1B, '[',  '1', '0','0', ';', '1', '0', '0', 'h', '\0'}; // Cursor home

int main()
{
    int c;
    printf("%s", cmd1);
    gotoxy(100,200);
    printf("hello world\n");    
    scanf("%c", &c);
    printf("%s", cmd1);
//    while(1);

    return 0;
}

