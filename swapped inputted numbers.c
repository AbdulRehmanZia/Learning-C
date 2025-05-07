#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter second Number: ");
    scanf("%d",&b);
    printf("Before swapped: a=%d b=%d", a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter swapped: a=%d b=%d", a,b);
    return 0;
}