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
	int n,found=0;
	scanf("%d",&n);
	for(i=0;i<a;i++)
	{
		if(n==arr[i])
		{
			found++;
		}
		
	}
	printf("%d",found);
	
}