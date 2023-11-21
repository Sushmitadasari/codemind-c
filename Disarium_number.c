#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,temp,d,x;
    scanf("%d",&n);
    temp=n;
    d=0;
    while(n>0)
    {
        d++;
        n=n/10;
    }
    n=temp;
    while(n>0)
    {
        x=n%10;
        sum=sum+pow(x,d);
        d--;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
        
}