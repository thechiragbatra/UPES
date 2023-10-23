#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter first number\n");
    scanf("%d",&a);
    printf("enter second number\n");
    scanf("%d",&b);
    printf("enter third number\n");
    scanf("%d",&c);
    if (a>b && a>c)
    
    printf("a is greatest");
    if (b>a && b>c)
     
    printf("b is greatest");
    else
    printf("c is greatest");
    return 0;
}