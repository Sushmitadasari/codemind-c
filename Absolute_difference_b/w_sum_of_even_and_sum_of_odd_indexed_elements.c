#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum1=0;
    int sum2=0;
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            sum1=sum1+arr[i];
        }
        else
        {
            sum2+=arr[i];
        }
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