#include <stdio.h>

int main()
{
    int number, factorial = 1, i = 1;
    printf("enter number");
    scanf("%d", &number);
    while (i <= number)
    {
        if (number < 0)
            printf("no factorial");
        else if (number == 0)
            printf("1");
        else
            factorial = factorial * i;
        i = i + 1;
    }
    printf("%d", factorial);
    return 0;
}