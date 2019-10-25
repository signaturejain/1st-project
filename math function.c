#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
     float  c;
    a=11;
    while(a<=20)
    {
    printf("\n%d",a);
    b=pow(a,2);
    printf("\n%d",b);
    c= sqrt(a);
    printf("\n%0.3f",c);
    a++;
    }
    
}