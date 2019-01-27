#include <stdio.h>

int main()
{
    int a[20];
    int i,n;
    printf("Enter n");
    scanf("%d",&n);
    printf("Enter array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d:%d\n",i,a[i]);
    }
    
    return 0;
}
