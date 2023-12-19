#include<stdio.h>
int main()
{
    int a,i;
    float sum1=0,sum2=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        if(arr[i]%2==0)
        {
         sum1=sum1+arr[i];
        }
        else sum2=sum2+arr[i];
    }
    {
        if(sum1>sum2)
        {
            printf("%.f",sum1-sum2);
        }
        else{
            printf("%.f",sum2-sum1);
        }
    }
}