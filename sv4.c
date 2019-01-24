#include <stdio.h>

int main()
{
    char str[20];
    int i=0,count=0;
    printf("Enter string");
    gets(str);
    while(str[i]!='\0')
    {
        i++;
        count++;
    }
    
    str[count]='.';
    
    
printf("%s",str);
    getch();
}
