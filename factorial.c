#include<stdio.h>

int main()
{
    int a,b,c;
    printf("factorial of_");
    scanf("%d",&a);
    b=1,c=2;
    while(c<=a)
    {
    b=b*c;
    
    c++;
    
    
    }
    printf("%d",b);
}