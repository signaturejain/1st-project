#include<stdio.h>

int main()
{ int a,b,c,d;
scanf("%d%d%d",&a,&b,&c);
 d= a<b?(a<c? printf("%d",a): printf("%d",c)):(b<c? printf("%d",b): printf("%d",c));}