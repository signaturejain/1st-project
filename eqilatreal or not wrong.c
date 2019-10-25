#include<stdio.h>

int main()
{
  int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

if(a+b>c)
{
if(b+c>a)
{
if(c+a>b)
printf("triangle is possible");
else
printf("triangle is not possible");

}
}

if( a==b )
{
if(b==c)
printf("triangle is equilateral");
else 
printf("its isocles");

}

if(b==c)
{
if(a==c)
printf("triangle is equilateral");
else 
printf("its isocles");

}

if(a==c)
{
if(b==c)
printf("triangle is equilateral");
else 
printf("its isocles");

}}
    