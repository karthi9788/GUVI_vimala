#include <stdio.h>

int main()
{

    char  a[10];
    int i;
     printf("Enter string");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
    if(i%2!=0)
    {
        printf("%c",a[i]);
    }
    }
    printf(" ");
    for(i=0;a[i]!='\0';i++)
    {
    if(i%2==0)
    {
        printf("%c",a[i]);
    }
    }
    

    return 0;
}
