#include <stdio.h>

int main()
{
    int a,i;
    printf("Enter a");
    scanf("%d",&a);
    for(i=1;i<=5;i++)
    {
        printf("%d ",a*i);
    }
    
    return 0;
}
