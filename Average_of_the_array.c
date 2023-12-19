#include<stdio.h>
int main()
{
    int a,i;
	scanf("%d",&a);
    float arr[a];
	for(i=0;i<a;i++)
	{
		scanf("%f",&arr[i]);
	}
	float sum=0.0;
	for(i=0;i<a;i++)
	{
	   sum=sum+arr[i];
	}
	float avg=(sum/a)*1.0;
	printf("%.2f",avg);
}