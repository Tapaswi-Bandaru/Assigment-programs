#include <stdio.h>
void main()
{
char letter;
printf("enter letter");
scanf("%c",&letter);
if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'||letter=='A'||letter=='I'||letter=='O'||letter=='U'||letter=='E')
printf("letter is vowel");
else
printf("letter is not a vowel");
}