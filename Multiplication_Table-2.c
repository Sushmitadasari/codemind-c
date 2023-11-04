#include<stdio.h>
int main()
{
    int n,x,i;
    scanf("%d%d",&n,&x);
    for(i=1;i<=x;++i)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}