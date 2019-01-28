
#include <stdio.h>

int main()
{

    char  a[10];
    int i,count=0,j;
     printf("Enter string");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
    for(j=i+1;a[j]!='\0';j++)
    {
        if(a[i]==a[j])
        {
            count++;
        }
        
    }
    }
    
    if(count>0)
    {
        printf("Not isogram");
    }
    else
    {
        printf(" Isogram");
    }
    

    return 0;
}
