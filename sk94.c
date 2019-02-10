



#include<stdio.h>
#include<math.h>
void  main()
{
int a[10],n,c,i;
printf("Enter n");
scanf("%d",&n);
printf("Enbter c");
scanf("%d",&c);
printf("Enter array");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("%d",a[c-1]);
}
