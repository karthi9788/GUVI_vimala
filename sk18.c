#include <stdio.h>

int main()
{
    int a,b,i,rem,sum=0,count=0,temp,temp1;
    printf("Enter a and b ");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
    temp=i;
    temp1=i;
    count=0;
    sum=0;

    while(temp>0)
    {
        rem=temp%10;
        sum=sum+(rem*rem*rem);
        temp=temp/10;
    }
    if(sum==temp1)
    {
        printf(" %d",i);
    }
    
    }
    return 0;
}
