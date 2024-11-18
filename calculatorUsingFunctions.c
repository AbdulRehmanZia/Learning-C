#include<stdio.h>
int sum(int num1, int num2);
int sub(int num1, int num2);
int multiply(int num1, int num2);
int div(int num1, int num2);
int remainder(int num1, int num2);
int main()
{
    int num1, num2, opt;
    
   printf("Enter Your First Number: ");
    scanf("%d",&num1);
  
  printf("\nEnter Your Second Number: ");
  scanf("%d",&num2);
  
  printf("Which Operation Do You Wanna Perform?");
  printf("\nEnter (1) For +");
  printf("\nEnter (2) For -");
  printf("\nEnter (3) For *");
  printf("\nEnter (4) For /");
  printf("\nEnter (5) For %");
  
  printf("\n\nWhich Operation Do You Wanna Perform?: ");
   scanf("%d",&opt); 
    switch(opt) {
    case 1:  sum(num1, num2);
    break;
    
    case 2: sub(num1, num2);
    break;
    
    case 3: multiply(num1, num2);
    break;
    
    case 4: div(num1, num2);
    break;
    
    case 5: remainder(num1, num2);
    break;
    
    default: printf("\nIn-valid Option!!!");
    }
    return 0;
}

int sum(int num1, num2) {
int ans = num1 +  num2;
printf("\nThe Result Of + is: %d",ans);
}

int sub(int num1, num2) {
int ans = num1 - num2;
printf("\nThe Result Of - is: %d",ans);
}

int multiply (int num1, num2) {
int ans = num1 *  num2;
printf("\nThe Result Of * is: %d",ans);
}

int div(int num1, num2) {
float ans = num1 / num2;
printf("\nThe Result Of / is: %d",ans);
}

int remainder(int num1, num2) {
float ans = num1 %  num2;
printf("\nThe Result Of remainder is: %d",ans);
}