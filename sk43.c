#include <stdio.h>

int main()
{
    char a[20];
    int i,count=0;
    printf("enter the string");
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
    if(a[i]==' ')
    {
        count++;
    }
    
     
    }
printf("%d",count);
    return 0;
}
