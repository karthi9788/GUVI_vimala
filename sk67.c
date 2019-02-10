



#include<stdio.h>
void  main()
{
int a,i;
printf("Enter no");
scanf("%d",&a);
for(i=a;i<a+10;i++)
{
    if(i%10==0)
    {
        printf("%d",i);
        break;
    }
}
}
