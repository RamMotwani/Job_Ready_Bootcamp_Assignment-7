#include<stdio.h>
int main()
{
    int n,a,i,sum=0;
    printf("enter a no. to find it is armstrong no.");
    scanf("%d",&n);
    a=n;
    while(a!=0)
    {
        i=a%10;
        sum=sum+i*i*i;
        a=a/10;
    }
    if(sum==n)
    {
        printf("%d",n);
    }
    else
    {
        printf("no is not armstrong");
    }
    return 0;
}
