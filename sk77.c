

#include <stdio.h>
#include<string.h>
int main()
{
 int a,i;
 printf("Enter no");
 scanf("%d",&a);
 for(i=1;i<=a;i++)
 {
     if(a%i==0)
     {
        printf("%d ",i);
     }
 }

    return 0;
}
