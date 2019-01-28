#include <stdio.h>

int main()
{

    char a[20],b[10];
    int i,j=0;
    printf("Enter string");
    scanf("%s",a);
    
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z' )
        {
            a[i]=0;
        }
        else
        {
            b[j]=a[i];
            j++;
        }
    }
     for(i=0;b[i]!='\0';i++)
     {
            printf("%c",b[i]);
     }
    
    return 0;
    }
