#include <stdio.h>

int main()
{
    
    int a[20];
    int max=0,i;
    printf("enter the 10 no");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    
    for(i=1;i<5;i++)
    {
    if(max<a[i])
    {
        max=a[i];
    }
    }
printf("%d",max);
    return 0;
}
