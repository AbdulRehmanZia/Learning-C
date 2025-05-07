#include<stdio.h>

int main()
{
int j=1,num,f;
    printf("Which number factorial you wanna print?: ");
    scanf("%d",&num);
   for (j=1;j<=num;j++){
    f*=j;
    }
    printf("%d! is %d",num,f);
    return 0;
}