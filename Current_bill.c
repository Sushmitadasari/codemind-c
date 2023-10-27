#include<stdio.h>
int main()
{
    float x,c,su,tc;
    scanf("%f",&x);
    if(x<200)
    {
        c=x*1.20;
    }
    else if(x>=200&&x<400)
    {
        c=x*1.50;
    }
    else if(x>=400&&x<600)
    {
        c=x*1.80;
    }
    else
    {
        c=x*2.00;
    }
    if(c>=400)
    {
        su=0.15*c;
        tc=c+su;
        printf("%.2f",tc);
    }
    else
    printf("%.2f",c+100);
    
    
}