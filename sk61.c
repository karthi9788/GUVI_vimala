



#include<stdio.h>

int  main()
{

  char a[20];
  int n,i;
  printf("Enter a");
  scanf("%s",a);
  printf("Enter n");
  scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("%c",a[i]);
   }
    return(0);
}
