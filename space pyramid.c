#include<stdio.h>

int main()
{
int i,j,k;
for(i=1;i<=4;i++)
{
for(j=3;j>=i;j--)
{printf("_");}
for(k=1;k<=i;k++)
{ printf("*_");}
printf("\n");

}


}