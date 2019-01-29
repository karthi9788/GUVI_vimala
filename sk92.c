#include <stdio.h>

int main()
{
int n,i,sum=0,c;
printf("Enter n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    scanf("%d",&c);
    sum=sum+c;
}
printf("%d",sum);

    return 0;
}
