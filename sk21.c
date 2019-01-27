#include <stdio.h>

int main()
{
    int a,n,d,l,sum,i;
    printf("Enter total term");
    scanf("%d",&n);
    printf("Enter first term ");
    scanf("%d",&a);
    printf("Enter diff");
    scanf("%d",&d);
    l=(a+(n-1)*d);
    sum=(n*(2*a+(n-1)*d))/2;
    for(i=a;i<=l;i=i+d)
    {
        if(i!=l)
        {
            printf("%d + ",i);
        }
        else
        {
            printf("%d = %d",i,sum);
        }
    }
    
    return 0;
}
