#include<stdio.h>

int main()
{ int i,j,k,l,num=1,mum=11;

    for(i=1;i<=4;i++)
    {
    for(l=1;l<=i;l++)
    {printf("_ ");}
    for(j=4;j>=i;j--)
    {printf("%d*",num);
    num++;}
    for(k=4;k>=i;k--)
    {printf("%d*",mum);
    mum++;}
    printf("\n");
    }
}