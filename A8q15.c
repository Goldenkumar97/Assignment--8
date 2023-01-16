#include"stdio.h"
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        printf(" ");
        for(k=1;k<=i;k++)
        if(k==1 || k==i || i==5)
        printf("*");
        else
        printf(" ");
        printf("\n");

    }
    return 0;
}