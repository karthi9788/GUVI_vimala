#include<stdio.h>
int  main()
{
   int b[10];
    int n,i,res=0;
    printf("Enter n");
    scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&b[i]);
  }
  for(i=0;i<n;i++)
  {
      res=res+b[i];
  }
  printf("%d",res/n);
 return (0);   
}
