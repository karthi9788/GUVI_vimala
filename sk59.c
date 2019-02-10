


#include<stdio.h>
#include<math.h>
int  main()
{

  int a,count=0;
  printf("Enter a");
  scanf("%d",&a);
  while(a)
  {
      count++;
      a=a/10;
  }
  printf("%d",count);
    return(0);
}
