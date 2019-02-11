

#include <stdio.h>
#include<string.h>
int main()
{
  int a,b,c,count=0,i;
  printf("Enter a no");
  scanf("%d",&a);
  printf("Enter a range");
  scanf("%d %d",&b,&c);
  for(i=b;i<=c;i++)
  {
      if(a==i)
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
