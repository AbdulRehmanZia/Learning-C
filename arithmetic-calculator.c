#include<stdio.h>
int main()
{
float num1, num2;
int opt;

printf("CALCULATOR\n");

printf("\nEnter Your First Number: ");
scanf("%f",&num1);
printf("Enter Your Second Number: ");
scanf("%f",& num2);

printf("\nWhich Operation Do You Wanna Perform\n?");
printf("\n1 for + \n2 for - \n3 for *\n4 for / \nopt: ");
scanf("%d", &opt);

switch (opt) {
case 1: printf("\nYour Answer: %.2f", num1+num2);
break;

case 2: printf("\nYour Answer: %.2f", num1-num2);
break;

case 3: printf("\nYour Answer: %.2f", num1*num2);
break;

case 4:
if(num2!=0) printf("\nYour Answer: %.2f", num1/num2);
else printf("\nCan't divide the number by 0");
break;

default: printf("\nInvalid Option!!!");
}
return 0;

}