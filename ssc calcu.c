#include<stdio.h>

int main(){
printf("enter");
int a;
scanf("%d",&a);
printf("enter 2");
int b;
scanf("%d",&b);
int c;

printf(" enter operator ('+','*','-','/')");
char d;
scanf(" %c",&d);
switch(d)

{
case '+':
c = a+b;
printf("%d",c);
break;
case  '*':
c=a*b;
printf("%d",c);
break;
case '-':
c=a-b;
printf("%d",c);break;
case  '/':
c=a/b;
printf("%d",c);break;
default:
printf("wrong");
}




}