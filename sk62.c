



#include<stdio.h>

int  main()
{

  char a[20];
  int n,i,count1=0,count2=0;
  printf("Enter a");
  scanf("%s",a);
  
   for(i=0;a[i]!='\0';i++)
   {
       count1++;
       if(a[i]=='1'||a[i]=='0')
       {
           count2++;
       }
   }
   if (count1==count2)
   {
       printf("Yes");
   }
   else
   {
       printf("no");
   }
    return(0);
}
