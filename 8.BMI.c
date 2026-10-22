#include <stdio.h>
void main()
{
float height,weight,BMI;
printf("enter height,weight values");
scanf("%f %f",&height,&weight);
BMI=weight/(height*height);
printf("%f",BMI);
if(BMI<18.5)
printf("under weight");
else if(BMI>=18.5 && BMI<25)
printf("normal");
else if(BMI>=25 && BMI<30)
printf("overweight");
else
printf("obese");
}