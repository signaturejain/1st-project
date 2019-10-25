#include<stdio.h>

int main()
{
    int a,b,result;
    char d;
    do
    {
    printf("no.");
    scanf("%d",&a);
    printf("no2.");
    scanf("%d",&b);
    result = a+b;
    printf("%d",result);
    
    printf("repeat y or n");
    scanf(" %c",&d);
    }while (d=='y');
    if(d=='n')
    {
    printf("tnq");
    }
}