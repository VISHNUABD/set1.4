#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter a value");
    scanf("%i",&a);
    printf("enter b value");
    scanf("%i",&b);
    printf("enter c value");
    scanf("%i",&c);
    if(a>b && a>c)
    printf("a is greater");
    else if(b>c)
    printf("b is greater");
    else
    printf("c is greater");
    return 0;
}
