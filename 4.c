// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int p,r,t;
    printf("enter principal");
    scanf("%d",&p);
    printf("enter rate of intrest");
    scanf("%d",&r);
    printf("enter time");
    scanf("%d",&t);
    printf("simple intrest is:%d",p*r*t/100);

    return 0;
}