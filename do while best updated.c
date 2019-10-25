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
    }while (d=='y');
    int r=5;
    while(d=='y',r<=10)
    
    {
    printf("\n %d",result);
    r++;
    }
    
    printf("repeat y or n");
    scanf(" %c",&d);
    
    if(d=='n')
    {
    printf("tnq");
    }
}