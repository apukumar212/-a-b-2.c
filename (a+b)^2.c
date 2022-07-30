#include<stdio.h>
int main()
{
float a,b,x;
printf("Enter the value of a:");
scanf("%f",&a);
printf("Enter the value of b:");
scanf("%f",&b);
x=((a*a)+(b*b)+2*a*b);
printf("result=%f \n",x);
return 0;
}