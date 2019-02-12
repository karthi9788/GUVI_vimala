
#include <stdio.h>

int main()
{
   int a,b,temp,count=0,sum;
   scanf("%d %d",&a,&b);
   temp=b;
   while(temp>0)
   {
       count++;
       temp=temp/10;
   }
sum=a*(pow(10,count))+b;
printf("%d",sum);
    return 0;
}
