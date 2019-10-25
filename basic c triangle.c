#include<stdio.h>

int main()
{
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a+b>c||c+a>b||b+c>a)
{printf("triangle is possible \n");
if(a==b&&b==c)
printf(" triangle is equilateral");
 else if(a==b||b==c||c==a)
printf("triangle is equilateral");
else 
printf("triangle is scalene");
}
else 
printf("traingle is not possible");

}