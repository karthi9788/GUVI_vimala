#include <stdio.h>

int main()
{
    
    int a,b,temp;
    printf("enter the two no");
    scanf("%d%d",&a,&b);
    temp=a+b;
    a=temp-a;
    b=temp-b;
printf("%d %d",a,b);
    return 0;
}
