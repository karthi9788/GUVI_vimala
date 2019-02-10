

#include <stdio.h>

int main()
{
    char a[10],b[10];
    int count1=0,count2=0,i;
    printf("Enter a string");
    scanf("%s",a);
    printf("Enter string");
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++)
    {
        count1++;
    }
        for(i=0;b[i]!='\0';i++)
    {
        count2++;
    }
if(count1>count2)
{
    printf("%s",a);
}
else if(count1<count2)
{
    printf("%s",b);
}
else
{
    printf("%s",a);
}
    return 0;
}
