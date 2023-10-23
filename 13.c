#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if (ch >= 'A' && ch <= 'Z') {
            printf("The entered character is an uppercase letter.\n");
        } else {
            printf("The entered character is a lowercase letter.\n");
        }
    } else if (ch >= '0' && ch <= '9') {
        printf("The entered character is a digit.\n");
    } else {
        printf("The entered character is a special character.\n");
    }

    return 0;
}