#include <stdio.h>
void main()
{
int n;
printf("enter n values");
scanf("%d",&n);
if(n>0)
printf("the given value is positive");
else if (n<0)
printf("the given number is negative");
else
printf("the given number is zero");
}