#include <stdio.h>
int main()
{
    char string[]="nullaaa";
    printf("%c",sizeof(char));
    printf("\n%c",sizeof(string));
    printf("\n%c",sizeof(string)/sizeof string[0]);

    return 0;
}



