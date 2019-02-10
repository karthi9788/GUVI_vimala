



#include<stdio.h>

void  main()
{
int a,rem,pro=1;

printf("Enter a");
scanf("%d",&a);
while(a)
{
    rem=a%10;
    pro=pro*rem;
    a=a/10;
}
printf("%d",pro);
}
