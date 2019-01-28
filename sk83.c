#include <stdio.h>

int main()
{
    int a,b,c;
    char d;
    printf("Enter character");
    scanf("%c",&d);
    printf("Enter a");
    scanf("%d",&a);
    
    
    
    printf("Enter b");
    scanf("%d",&b);
    
    if(c=='/')
    {
     c=a/b;   
    }
    else
    {
      c=a%b;  
    }
    printf("%d",c);

    return 0;
}
