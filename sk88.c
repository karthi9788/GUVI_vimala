#include <stdio.h>

int main()
{

    int a,b,rem,temp1,temp2,c;
    printf("Enter a and b");
    scanf("%d%d",&a,&b);
    temp1=a;
    temp2=b;
    while(b!=0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }
    c=(temp1*temp2)/a;
    printf("%d",c);
    return 0;
}
