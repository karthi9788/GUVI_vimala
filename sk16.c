#include <stdio.h>

int main()
{
    int a,b,i,j,count=0,temp;
    printf("Enter a and b");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        temp=i;
        count=0;
        for(j=2;j<=temp/2;j++)
        {
            if(temp%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            printf(" %d",i);
        }
    }
    return 0;
}
