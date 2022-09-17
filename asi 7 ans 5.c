#include<stdio.h>
int main()
{
 int a,b,count=2,min;
printf("enter two no.s to find those are co-prime or not");
scanf("%d %d",&a,&b);
 for(min=a>b?b:a;count<=min;count++)
 {
     if(a%count==0||b%count==0)
     {
         printf("not co-prime no.");
         break;
     }
 }
if(count==min+1)
{
    printf("these are co-prime no.");
}
return 0;

}



