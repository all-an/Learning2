#include <stdio.h>

int main()
{
    //int x;
    //float y;
    char x;

    printf("Type a character: ");
    scanf("%c",&x);
    fflush(stdin);
    printf("Character %c\n",x);

    return(0);
}