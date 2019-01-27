#include <stdio.h>

int main()
{
    int n,i;
    float median;
    int b[10];
    printf("Enter n");
    scanf("%d",&n);
    printf("Enter array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    
    
    
    if(n%2==0)
    {
        median=(b[(n-1)/2]+b[n/2])/2.0;
    }
    else
    {
        median=b[(n-1)/2];
    }
    printf("%f",median);
    return 0;
}
