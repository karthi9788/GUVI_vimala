#include <stdio.h>
void main()
{
int n,i,fact=1;
char a[10];
printf("Enter no");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    fact=fact*i;
}
printf("%d",fact);
}
