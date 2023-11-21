#include<stdio.h>
int main()
{
    int n,sum=0,x,s;
    scanf("%d",&n);
    s=n;
    n*=n;
    while(n>0)
    {
      x=n%10;
      sum=sum+x;
      n=n/10;
    }
    if(s==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}