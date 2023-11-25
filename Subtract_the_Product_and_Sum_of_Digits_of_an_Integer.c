#include<stdio.h>
int main()
{
    int x,i,n,sum=0,pro=1;
    scanf("%d",&x);
    while(x!=0)
    {
      n=x%10;
      sum=sum+n;
      pro=pro*n;
      x=x/10;
    }
    if(sum>pro)
    {
    printf("%d",sum-pro);
    }
    else
    {
      printf("%d",pro-sum);
    }
}