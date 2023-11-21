#include<stdio.h>
int main()
{
    int n,i,fct=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fct=fct*i;
    }
    printf("%d",fct);
}