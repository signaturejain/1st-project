#include<stdio.h>

int main()
{
int n,a,b=0,i=1;
scanf("%d",&n);
while(i<=5)
{a=n%10;
b=b*10+a;
n=n/10;
i++;}
printf("%d",b);
}