#include<stdio.h>
int main()
{
    int m,n,i,j,sum1=0,sum2=0;
    scanf("%d%d",&m,&n);
    for(i=1;i<=m/2;i++)
    {
       if(m%i==0) 
       {
           sum1=sum1+i;
       }
    }
    for(j=1;j<=n/2;j++)
    {
       if(n%j==0)
       {
           sum2=sum2+j;
       }
    }
    if(sum1==n&&sum2==m)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}