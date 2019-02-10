

#include <stdio.h>

int main()
{
    char a[10],b[10];
    int count1=0,i,j=0;
    printf("Enter a string");
    scanf("%s",a);
    printf("Enter string");
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++)
    {
        count1++;
    }
     for(i=count1;b[j]!='\0';i++)
     {
         a[i]=b[j];
         j++;
     }
     printf("%s",a);
    return 0;
}
