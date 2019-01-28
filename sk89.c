#include <stdio.h>
#include<string.h>

int main()
{

    char a[20];
    int i,j=0,temp;
    printf("Enter string");
    scanf("%s",a);
    
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        
        {
            if(strcmp(a[i],a[j])>0))
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j]);
                )
            }
            
        }
        
    }
     for(i=0;b[i]!='\0';i++)
     {
            printf("%c",b[i]);
     }
    
    return 0;
}
