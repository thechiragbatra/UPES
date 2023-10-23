#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    do
    {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
        n--;
    } while (n > 0);
    printf("\n");
    return 0;
}