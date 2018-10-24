#include <stdio.h>

char cmd1[5] = {0x1B, '[', '2', 'J', '\0'}; // Clear screen
char cmd2[4] = {0x1B, '[', 'f', '\0'}; // Cursor home

int main()
{
    printf(cmd1);
    printf(cmd2);




    return 0;
}

