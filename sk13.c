#include <stdio.h>

int main()
{
    int a,count=0,i;
    printf("Enter a");
    scanf("%d",&a);
    for(i=2;i<a/2;i++)
    {
        if(a%i==0)
        {
          count++;
          break;
        }
    }
    if(count==0)
    {
        printf("Prime no");
    }
    else
    {
        printf(" Not Prime no");
    }
    
    return 0;
}
