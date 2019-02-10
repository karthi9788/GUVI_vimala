



#include<stdio.h>

void  main()
{
int a[10],n,min,i;
printf("Enter a");
scanf("%d",&n);
printf("Enter array");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    min=a[i];
    if(a[i]>a[i+1])
    {
        printf("%d",i);
        break;
    }
}
}
