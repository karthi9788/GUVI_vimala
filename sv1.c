#include <stdio.h>
void main()
{
int n,i;
char a[10];
printf("Enter size");
scanf("%d",&n);
printf("Enter array");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=n-1;i>=0;i--)
{
    printf("%d",a[i]);
}

}
