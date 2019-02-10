

#include<stdio.h>
#include<math.h>
int  main()
{
    int a[20];
    int i,n,b,count=0;
    printf("Enter n");
    scanf("%d",&n);
    printf("Enter a");
    scanf("%d",&b);
   printf("Enter array");
   for(i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   
   {
       if(a[i]==b)
       {
           count++;
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
    return(0);
}
