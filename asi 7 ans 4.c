#include<stdio.h>
int main()
{
    int a,b,min;
    printf("enter tow no.s to find their hcf");
    scanf("%d %d",&a,&b);
    for(min=a>b?b:a;min>1;min--)
    {
        if(a%min==0&&b%min==0)
        {
            printf("%d is hcf",min);
            break;
        }
    }

return 0;

}
