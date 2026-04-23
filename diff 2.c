#include<stdio.h>
int diff(int a, int b){
int diff=a-b;
return diff;
}
int main(){
int a:int b: result;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
result = diff(a,b);
printf("diff=%d\n",result);
return 0;
}
