#include <stdio.h>

int main()
{
    int a,b,i;
    printf("Enter a and b");
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
     if(i%2==0)
     {
         printf("%d",i);
         printf(" ");
         }
     }
    
    return 0;
}
