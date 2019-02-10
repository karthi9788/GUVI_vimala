

#include <stdio.h>

int main()
{
    int a[10];
    int n,i,j,max=0,min=0;
    printf("Enter a length");
    scanf("%d",&n);
    printf("Enter arraya");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(j=1;j<n;j++)
    {
        if(max<a[j])
        {
            max=a[j];
        }
        if(min>a[j])
        {
            min=a[j];
        }
    }
   printf("%d",max);
    return 0;
}



