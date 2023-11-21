#include<stdio.h>
int main()
{
    int n,sum=0,pro=1;
    scanf("%d",&n);
    while(n>0)
    {
        int x=n%10;
        sum=sum+x;
        pro=pro*x;
        n=n/10;
    }
    {
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    }
}