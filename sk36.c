#include <stdio.h>

int main()
{
    int n,count=0;
    printf(" enter value n");
    
    scanf("%d",&n);
while(n>0)

{
    
    count++;
    n=n/10;
}
printf("%d",count);
    return(0);
}
