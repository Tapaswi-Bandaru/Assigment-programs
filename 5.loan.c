#include <stdio.h>
void main()
{
int age,income,score;
printf("enter age,income,score");
scanf("%d %d %d",&age,&income,&score);
if(age>21 && age<60)
{
      if(income>=25000)
      {
             if(score>=700)
             {
             printf("Loan approved");
             }
             else
             {
             printf("Loan rejected:credit score below 700");
             }
      }         
       else 
       {
       printf("Loan rejected:income below 25000");
       }
}       
else 
{
printf("Loan rejected:age not in 21 to 60");   
}          
}