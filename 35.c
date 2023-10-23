#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("enter n1 number value:");
    scanf("%d", &n1);
    printf("enter n2 number value:");
    scanf("%d", &n2);
    printf("enter n3 number value:");
    scanf("%d", &n3);
    if (n1 > n2 && n1 > n3)
    {
        printf("greatest number is : %d", n1);
    }
    else if (n1 < n2 && n2 > n3)
    {
        printf("greatest number is : %d", n2);
    }
    else
    {
        printf("greatest number is : %d", n3);
    }
    return 0;
}