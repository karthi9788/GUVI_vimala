#include <stdio.h>

int main()
{
    int n,max,i;
    int b[10];
    printf("Enter n");
    scanf("%d",&n);
    printf("Enter array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    max=b[0];
    for(i=0;i<n;i++)
    {
    if(max>b[i])
    {
    max=b[i];
    }}
    printf("%d",max);
    return 0;
}
