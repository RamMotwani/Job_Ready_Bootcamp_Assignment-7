#include<stdio.h>
int main()
{
int a=-1,b=1,c,n,i;
printf("enter a no. to finds its term of fibonnaci series");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    c=a+b;
    a=b;
    b=c;
}
printf("%d",c);
return 0;
}
