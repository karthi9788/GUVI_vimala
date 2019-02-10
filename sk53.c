

#include<stdio.h>
#include<math.h>
int  main()
{
    int a,rem,sum=0;
    printf("Enter a");
    scanf("%d",&a);
    while(a)
    {
        rem=a%10;
        sum=sum+rem;
        a=a/10;
    }
    printf("%d",sum);
    return(0);
}
