

#include<stdio.h>
#include<math.h>
int  main()
{
    int a,b,c;
    printf("Enter a and b");
    scanf("%d%d",&a,&b);
   c=a*b;
   if(c%2==0)
   {
       printf("Even");
   }
   else
   {
       printf("Odd");
   }
    return(0);
}
