

#include<stdio.h>
#include<math.h>
int  main()
{
    char a[20];
    int count1=0,count2=0,i;
    printf("Enter string");
    scanf("%s",a);
   for(i=0;a[i]!='\0';i++)
   {
       if(a[i]>='a'&&a[i]<='z')
       
       {
           count1++;
           break;
       }
   }
 for(i=0;a[i]!='\0';i++)
   {
       if(a[i]>='0'&&a[i]<='9')
       
       {
           count2++;
           break;
       }
   }
 if(count1>0&&count2>0)
 {
     printf("Yes");
 }
 else
 {
     printf("No");
 }
    return(0);
}
