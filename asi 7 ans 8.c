#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a no. to print the next prime no.");
    scanf("%d",&n);
    do
    {
        n++;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
                break;
        }
    }while(i<n);

    if(i==n)
    {
        printf("%d",n);
    }
    return 0;
}
