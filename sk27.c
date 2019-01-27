#include <stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i=0,count=0,l;
    printf("Enter String");
    scanf("%s",a);
    l=strlen(a);
    while(a[i]!='\0')
    {
        if(a[i]>= '0' && a[i]<= '9'   )
        {
        count++;
       
        }
        i++;
    }
    if(count==l)
    {
        printf("Integer %d",count);
    }
    else
    {
        printf("String");
    }
    
    return 0;
}
