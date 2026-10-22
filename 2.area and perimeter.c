#include <stdio.h>
void main()
{
int l,b,perimeter,area;
printf("enter l,b values");
scanf("%d %d",&l,&b);
perimeter=2*(l+b);
printf("perimeter=%d",perimeter);
area=l*b;
printf("\narea=%d",area);
}