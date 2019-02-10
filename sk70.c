



#include<stdio.h>
#include<math.h>
void  main()
{
int a,i,c;
printf("Enter a");
scanf("%d",&a);
for(i=1;i<a-1;i++)
{
    c=pow(2,i);
  if(c>a)
  {
      printf("%d",c);
      break;
  }
}
  
}
