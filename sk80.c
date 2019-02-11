

#include <stdio.h>
#include<string.h>
int main()
{
 int a,rem,sum=0;
 printf("Enter a ");
 scanf("%d",&a);
 
while(a)
{
    rem=a%10;
    if(rem%2!=0)
    {
     sum=sum*10+rem;   
    }
    a=a/10;
}

 while(sum)
 {
    rem=sum%10;
    printf("%d ",rem);
    sum=sum/10;
 }

    return 0;
}
