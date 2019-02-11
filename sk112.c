#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter a");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d",a/2);
    }
    else
    {
        printf("%d",a);
    }
    return(0);
}
