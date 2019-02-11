

#include <stdio.h>
#include<string.h>
int main()
{
  char a[20],b[20];
  int l,i,j=0;
  printf("Enter string");
  scanf("%s",a);
  strcpy(b,a);
  l=strlen(a);
  for(i=l-1;i>=0;i--)
  {
      b[j]=a[i];
      j++;
  }
  if(strcmp(a,b)==0)
  {
      printf("yes");
  }
else
{
    printf("No");
}
    return 0;
}
