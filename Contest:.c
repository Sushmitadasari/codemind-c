#include<stdio.h>
int main()
{
    int a,x,y,z;
    scanf("%d%d%d",&a,&x,&y);
    z=x+y*2;
    if(z>=a)
    printf("Qualify");
    else
    printf("Not Qualify");
}