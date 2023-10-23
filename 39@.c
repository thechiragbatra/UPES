#include <stdio.h>

int main()
{
    int n1, n2;
    printf("enter n1 number value :");
    scanf("%d", &n1);
    printf("enter n2 number value:");
    scanf("%d", &n2);
    if (n1 > n2)
    {
        printf("n1 is greater :%d", n1);
    }
    else
    {
        printf("n2 is greater : %d", n2);
    }
    return 0;
}