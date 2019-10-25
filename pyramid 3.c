#include<stdio.h>

int main()
{
int i,j,k,l;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{printf("*");}
for(k=4;k>=i;k--)
{ printf("_ ");}
for(l=1;l<=i;l++)
{ printf("*");}
printf("\n");

}


}