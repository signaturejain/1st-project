#include<stdio.h>

int main()
{
    int year;
    char m;
 {

    c:
    printf("enter year");
    scanf("%d",&year);
    if(year%4==0||year%100==0||year%400==0)
    printf("its leap");
    else
    printf("not leap");
}
    printf("wanna reapeat");
    scanf("%c",m);

    {
        if(m=='y')
        {
            goto c;
        }
        else
            printf("thanks for using");
    }
}
