



#include<stdio.h>
void  main()
{
int a,i,count=0;
printf("Enter no");
scanf("%d",&a);
for(i=2;i<a-1;i++)
{
   if(a%i==0)
   {
       count++;
   }
}
if(count==0)
{
    printf("Prime no");
}
else
{
    printf("No");
}
}
