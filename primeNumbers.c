#include<stdio.h>

void main() {
    int num, isPrime = 1, j;

    printf("Enter Your Number: ");
    scanf("%d", &num);

    for(j = 2; j < num; j++) {
        if(num % j == 0) {
            isPrime = 0;
            break; 
        }
    }

    if(isPrime == 1) {
        printf("Your Number is Prime");
    } else {
        printf("Your Number is not Prime");
    }
}