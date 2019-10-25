#include<stdio.h>

int main()
{
int a[10],i,j,sum=0;
for(i=0;i<=9;i++)
{
printf("enterno.");
scanf("%d",&a[i]);
printf("%d\n", a[i]);

}
for(j=0;j<=9;j++)
{
sum=sum+a[j];
}
printf("%d",j);


printf("%f",sum);

    
}