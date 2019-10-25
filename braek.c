#include<stdio.h>

int main()
{
    int a,b ,i;
    printf("enter no.");
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
    if ( i==5)
    break;
    for(b=0;b <=i;b++)
    {
    printf("%d+ %d",i,b);
    }
    printf("\n");
    
    }
}