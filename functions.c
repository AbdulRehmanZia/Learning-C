#include <stdio.h>

int sum(int a, int b);
int sub(int a, int b);
int main (){
int x=5, y=3;

printf("Sum result: %d", sum(x,y));
printf("\n\nSub result: %d", sub(x,y));

return 0;
}

int sum(int a, int b) {
int ans = a+b;
return ans;
}

int sub(int a, int b) {
int ans = a-b;
return ans;
}