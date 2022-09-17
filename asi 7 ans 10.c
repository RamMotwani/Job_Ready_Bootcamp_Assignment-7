#include<stdio.h>
int main()
{
    int n,a,i,sum;
    for(n=153;n<=1000;n++)
    {
        sum=0;
        a=n;
        while(a!=0)
        {
        i=a%10;
        sum=sum+i*i*i;
        a=a/10;
        }
        if(sum==n)
        {
            printf("%d\n",n);
        }

    }

    return 0;
}
