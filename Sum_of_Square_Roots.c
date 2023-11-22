#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,x,i,sum=0;
    scanf("%f%f",&a,&b);
    for(i=a;i<=b;i++)
    {
        x=sqrt(i);
        sum=sum+x;
    }
    printf("%.2f",sum);
}