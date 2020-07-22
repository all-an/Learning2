#include <stdio.h>

int main()
{
    //char password[] = "fuzzy \t\"\nwuzzy";
    //char name[15]; //room for 14 characters initializing in 0
    char input[64];

    printf("Instructions: ");
    fgets(input,64,stdin);
    puts("Thank you! Here are your instructions:");
    puts(input);
                        
    return(0);
}