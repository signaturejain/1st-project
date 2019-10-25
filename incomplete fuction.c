#include<stdio.h>


int  factorial(int a)
{
int result=1,i;
    for(i=1;i<=a;i++)
    {
    result = result*i;
    }
    printf("%d",result);
    return 0;
    
}
int main()
{
char b;
do
{
int a;  
printf("entrr");
scanf("%d",&a);


factorial(a);

printf("wanna reapeat(y/n)"); 

scanf("%c",&b);

} while(b ==' y');


return 0;
}