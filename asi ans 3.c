#include<stdio.h>
int main()
{
int a=-1,b=1,c,n,i;
printf("enter a no. to finds it is in fibonnaci series or not");
scanf("%d",&n);
for(i=0;i<=n*2;i++)
{
    c=a+b;
    a=b;
    b=c;
if(c==n)
    {
    printf("%d is in the fibonnaci series",n);
    break;
    }

}
if(i>n*2)
{
    printf("%d is not in fibonnaci series",n);
}
return 0;
}
