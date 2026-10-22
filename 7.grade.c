#include <stdio.h>
void main()
{
int marks;
char grade;
printf("enter marks");
scanf("%d",&marks);
if(marks>=90 && marks<=100)
grade='O';
else if(marks>=80 && marks<=89)
grade='A+';
else if(marks>=70 && marks<=79)
grade='A';
else if(marks>=60 && marks<=69)
grade='B';
else if(marks>=50 && marks<=59)
grade='C';
else if(marks<50)
printf("fail");
else
printf("invalid marks");
printf("grade=%c",grade);
}