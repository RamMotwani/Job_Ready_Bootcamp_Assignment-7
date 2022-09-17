#include<stdio.h>
int main()
{
    int x,y,i,min,max;
    printf("enter two no.s to print prime no.s between them");
    scanf("%d %d",&x,&y);
    max=x>y?x:y;
    for(min=x>y?y:x;min<max;min++)
    {
        for(i=2;i<min;i++)
         {
            if(min%i==0)
           {
            break;
           }
        }
      if(i>=min)
      {
          printf("%d",min);
      }

    }


}
