#include <stdio.h>

int main()
{
    int a,b,i,sum=1;
    printf("Enter a");
    scanf("%d",&a);
    printf("Enter b");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
    sum=sum*a;
    }
 printf("%d",sum);
    return 0;
}
