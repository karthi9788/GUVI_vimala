#include <stdio.h>

int main()
{
    int a,temp,rem,sum=0;
    printf("Enter a within 1000");
    scanf("%d",&a);
    temp=a;
    while(a)
    {
     rem=a%10;
     sum=sum*10+rem;
     a=a/10;
    }
    if(temp==sum)
    {
        printf("Palindrome");
        
    }
    else
    {
        printf("Not a palindrome");
    }
    return 0;
}
