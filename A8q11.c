#include"stdio.h"
int main()
{
int i,j,k;

for(i=1;i<=5;i++)
{
    k=65;
    for(j=1;j<=9;j++)
    {
        if(j>=6-i && j<=i+4)
        {
        printf("%c",k);
        j<5?k++:k--;
        }
        else
        printf(" ");
        
    }
    printf("\n");
}
    return 0;
}