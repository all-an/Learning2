#include <stdio.h>

int main()
{
    int x = 10;

    printf("%d\n",x);
    x++;  //same as x = x + 1
    printf("%d\n",x);
    x--; //same as x = x - 1
    x--;
    printf("%d\n",x);

    return(0);
}