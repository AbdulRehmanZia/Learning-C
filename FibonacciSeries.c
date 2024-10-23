#include<stdio.h>

int main()
{
    int t1 = 0, t2 = 1, t3 = 0, n;
    printf("Enter Your Limit: ");
    scanf("%d",&n);
    printf("Fibonacci series: %d %d", t1, t2);
    t3 = t1 +t2;
    while(t3<=n) {
    printf(" %d",t3);
    t1 = t2;
    t2 = t3;
    t3 = t1 + t2;
    }
    
    return 0;
}

/* For 10 digits limit 

#include<stdio.h>

int main()
{
    int t1 = 0, t2 = 1, t3= 0,n=3;
    printf("Fibonacci Series: %d %d",t1, t2);
    t3 = t1 + t2;
    while( n<=10) {
    printf(" %d",t3);
    t1=t2;
    t2=t3;
    t3 = t1+t2;
    n++;
    }
    return 0;
} */