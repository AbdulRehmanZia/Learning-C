#include<stdio.h>
int average();
int main()
{
    average();
    return 0;
}

int average(){
int arr[7], sum=0, avg;
for(int j=0;j<=6;j++) {
printf("Enter Your Number: ");
scanf("%d",&arr[j]);
sum += arr[j];
}
avg = sum/7;
printf("Average: %d",avg);
}