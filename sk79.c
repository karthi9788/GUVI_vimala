

#include <stdio.h>
#include<string.h>
int main()
{
 int a,b,c,d,i;
 printf("Enter a and b");
 scanf("%d %d",&a,&b);
 c=a*b;
 d=sqrt(c);
 i=d*d;
 if(i==c)
 {
     printf("Yes");
     
 }
else
{
    printf("No");
}
    

    return 0;
}
