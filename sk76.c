

#include <stdio.h>
#include<string.h>
int main()
{
 int a,i,count=0;
 printf("Enter no");
 scanf("%d",&a);
 for(i=2;i<a-1;i++)
 {
     if(a%i==0)
     {
         count++;
         break;
     }
 }
 if(count>0)
 {
     printf("Yes");
 }
 else
 {
     printf("No");
 }
    return 0;
}
