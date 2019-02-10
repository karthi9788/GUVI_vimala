



#include<stdio.h>

void  main()
{
int a,rem,sum;
printf("Enter a");
scanf("%d",&a);
while(a)
{
    rem=a%10;
    sum=sum*10+rem;
    a=a/10;
}
printf("%d",sum);
}
