#include <stdio.h>

int main()
{
    int a, i = 1;
    printf("enter number of which you want to print table :");
    scanf("%d", &a);
    while (i <= 10)
    {
        printf("%d\n", a * i);
        i++;
    }
    return 0;
}