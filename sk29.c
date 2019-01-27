#include <stdio.h>

int main()
{
    
    int n,h,m;
    printf("Enter n");
    scanf("%d",&n);
    h=n/60;
    m=n%60;
    printf("%d:%d",h,m);
    
    return 0;
}
