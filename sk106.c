
#include <stdio.h>

int main()
{
   int a[10],b[10];
   int n,i,k,j=0;
   scanf("%d %d",&n,&k);
   
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       if(a[i]%2!=0)
       {
           b[j]=a[i];
           j++;
       }
   }
   printf("%d ",b[k-1]);
    return 0;
}
