#include <stdio.h>

int main()
{
    float a;
    float b = 5;

    printf("Input a Number: ");
    scanf("%f",&a);
    printf("%.2f + %.2f = %.1f\n",a,b,a+b);
    printf("%.2f - %.2f = %.1f\n",a,b,a-b);
    printf("%.2f * %.2f = %.1f\n",a,b,a*b);
    printf("%.2f / %.2f = %.1f\n",a,b,a/b);

    return(0);
}