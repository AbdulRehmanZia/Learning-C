#include <stdio.h>

int sum();
int sub();
int main () {


sum();
printf("\n");
sub();

return 0;
}

int sum() {
int a=5,b=3;
int ans = a+b;
printf("Sum result: %d",ans);
}

int sub() {
int a=9,b=8;
int ans = a-b;
printf("Sub result: %d",ans);
}