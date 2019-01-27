#include <stdio.h>

int main()
{
    int a,rem,sum=0,count=0,temp,temp1;
    printf("Enter a ");
    scanf("%d",&a);
    temp=a;
    temp1=a;
    while(a>0)
    {
        count++;
        a=a/10;
    }
    while(temp>0)
    {
        rem=temp%10;
        sum=sum+(rem*rem*rem);
        temp=temp/10;
    }
    if(sum==temp1)
    {
        printf("Armstrong no");
    }
    else
    {
        printf(" Not a Armstrong no:%d",sum);
    }
    return 0;
}
