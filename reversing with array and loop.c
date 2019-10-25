#include<stdio.h>

int main()
{
 int i,a[4],num,e;
scanf("%d",&num);
for(i=0;i<4;i++)
{
a[i]=num%10;
num=num/10;
}
e=a[0]*10000+a[1]*1000+a[2]*100+a[3]*10+num;
printf("%d",e);
}
