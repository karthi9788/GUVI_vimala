

#include<stdio.h>
#include<math.h>
int  main()
{
    int a,rem,sum=0,temp;
    printf("Enter a");
    scanf("%d",&a);
    temp=a;
    while(a)
    {
        rem=a%10;
        sum=sum*10+rem;
        a=a/10;
    }
    while(sum)
    {
        rem=sum%10;
        printf("%d ",rem);
        sum=sum/10;
    }
    return(0);
}
