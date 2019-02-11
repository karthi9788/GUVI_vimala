

#include <stdio.h>
#include<string.h>
int main()
{
 char a[10];
 int i,l,b,c;
 printf("Enter string");
 scanf("%s",a);
 l=strlen(a);
 if(l%2!=0)
 {
     b=(l/2);
     a[b]='*';
 }
 else
 {
     b=(l/2)-1;
     c=b+1;
      a[b]='*';
       a[c]='*';
 }
 printf("%s",a);
    return 0;
}
