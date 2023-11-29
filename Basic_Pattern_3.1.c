#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(j=n;j>=1;j--)
    {
        for(i=j;i>=1;i--)
        {
            printf("* ",i);
        }
        printf("
");
    }
}