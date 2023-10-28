#include<stdio.h>
int main()
{
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    int l=k*m;
    int a=n/l;
    if(n%l==0)
    printf("%d",a);
    else
    printf("%d",a+1);
}