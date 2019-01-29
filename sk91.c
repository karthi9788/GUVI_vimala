#include <stdio.h>

int main()
{
int l,b,h,area,vol;
printf("Enter l,b,h");
scanf("%d%d%d",&l,&b,&h);
area=(2*l*b)+(2*l*h)+(2*b*h);
vol=l*b*h;
printf("%d %d",area,vol);

    return 0;
}
