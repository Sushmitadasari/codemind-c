#include<stdio.h>
int main()
{
    int a,i;
	scanf("%d",&a);
    int arr[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	int sum=0;
	for(i=0;i<a;i++)
	{
	   sum=sum+arr[i];
	}
	int count=0;
	int avg=sum/a;
for(i=0;i<a;i++)
{
	if(arr[i]<=avg)
	{
	    count++;
	}
}
	printf("%d",count);
	
}