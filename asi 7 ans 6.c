#include<stdio.h>
int main()
{
    int n,i;
    printf("program to print prime no under 100\n");
    for(n=1;n<=100;n++)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                break;

            }
        }
        if(i>=n)
        {
            printf("%d\n",n);
        }
    }
}
