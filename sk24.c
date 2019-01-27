#include <stdio.h>

int main()
{
    int n,i,j,temp;
    int b[10];
    printf("Enter n");
    scanf("%d",&n);
    printf("Enter array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
    if(b[i]>b[j])
    {
    temp=b[i];
    b[i]=b[j];
    b[j]=temp;
    
    }
            
        }}
    for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    return 0;
}
