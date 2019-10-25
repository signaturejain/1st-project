#include<stdio.h>

int main()
{
int a[5],i;
for(i=0;i<=5;i++)
{
printf("enter no.");
scanf("%d",&a[i]);

}
int min,j;
min = a[2];





for(j=0;j<=6;j++)
{
if(a[j]<a[j+1])

min = a[j];
}

printf("\n%d",min);


}