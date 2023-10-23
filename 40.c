#include <stdio.h>

int main()
{
    int n, rem, reverse = 0, temp;
    printf("enter number");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }
    printf("reverse is : %d", reverse);
    if (reverse == temp)
        printf("\nIt is a pallingdrome");
    else
        printf("\n it is not pallingdrome");
    return 0;
}