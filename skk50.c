#include<stdio.h>
#include<math.h>
int  main()
{
    int a,flag=0,i;
    printf("Enter a");
    scanf("%d",&a);
for(i=0;i<a;i++)
{
 if(pow(2,i) ==a)
 {
     flag++;
     break;
 }
}
if(flag>0)
{
printf("Yes");
}
else
{
    printf("No");
}
 return (0);   
}
