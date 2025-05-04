#include<stdio.h>
#include<stdbool.h>

int main()
{
int num;
bool isPrime;
    printf("Enter Your Number: ");
    scanf("%d",&num);

    for (int j=1; j<num; j++) {
    if (num%j == 0) {
    isPrime = true;
    }
    }
    if(isPrime){
    printf("The number is prime");
    }
    else {
    printf("The number isn't prime");
    }
    
    return 0;
}