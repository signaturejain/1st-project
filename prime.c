#include<stdio.h>

int main()
{
int a,i;
scanf("%d",&a);
for(i=2;i<a;i++)
{
if( i<a && a%i==0)
{printf("its not  prime");
}
 else if(a==i)
{printf("its prime");}

}}