#include<stdio.h>
int main()
{
    int a,b,i,n,s,c;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        n=i;
        s=i*i;
        c=i*i*i;
        printf("%d %d %d
",n,s,c);
    }
}