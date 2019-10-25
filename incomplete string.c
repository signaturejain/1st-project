#include<stdio.h>
#include<string.h>


 void main()
{
char nm[30], cl[30];

printf("enter name");

gets(nm);
puts(nm);
printf("enter college");
gets(cl);
puts(cl);

printf("%s",strcat(nm,cl));



}