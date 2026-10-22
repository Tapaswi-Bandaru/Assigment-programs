#include <stdio.h>
void main()
{
int membership,delivery,discount;
float order_amount,final_amount;
printf("enter order amount");
scanf("%f",&order_amount);
printf("enter membership");
scanf("%d",&membership);
if(order_amount>=500)
{
delivery=0;
         if(membership=1)
         {
         discount=order_amount*0.1;
         }
         else
         discount=0;
}
else
{
delivery=50;
}
final_amount=order_amount-discount+delivery;
printf("%f",final_amount);     
}