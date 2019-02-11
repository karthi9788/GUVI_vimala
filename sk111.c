

#include <stdio.h>
#include<string.h>
int main()
{
char a[10];
int b,l,c,i;
printf("Enter char");
scanf("%s",a);
printf("Enter no");
scanf("%d",&b);
l=strlen(a);

c=l-b;
for(i=c;a[i]!='\0';i++)
{
    printf("%c",a[i]);
}

    return 0;
}
