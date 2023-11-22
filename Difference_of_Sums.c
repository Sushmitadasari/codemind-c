#include<stdio.h>
int main()
{
    int n,m,sum1=0,sum2=0,i,x,diff;
    scanf("%d",&n);
    m=n*(n+1)/2;
    sum2=m*m;
    for(i=1;i<=n;i++)
    {
        x=i*i;
        sum1=sum1+x;
    }
    if(sum1>sum2)
    {
        printf("%d",sum1-sum2);
    }
    else
    {
        printf("%d",sum2-sum1);
    }
}