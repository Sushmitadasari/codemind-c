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
	int avg=(sum/a);
	int found=0;
	for(i=0;i<a;i++)
   {
	   if(avg==arr[i])
	  {
	    found=1;
	    break;
	  }
   }
   if(found==0)printf("False");
   else printf("True");
}