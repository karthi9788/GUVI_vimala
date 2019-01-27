#include <stdio.h>

int main()
{
    
    int a,b,c,d,n,v;
    printf("Enter a,b");
    scanf("%d%d%d%d",&a,&c,&b,&d);
    n=a-b;
    v=c-d;
    if(n<0 )
    {
        n=-(n);
    }
    if(v<0 )
    {
        v=-(v);
    }
    
    printf("%d %d",n,v);
    
    return 0;
}
