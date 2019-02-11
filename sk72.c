

#include <stdio.h>
#include<string.h>
int main()
{
  char a[20];
  int i,count=0;
  printf("Enter string");
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
      if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' )
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
    return 0;
}
