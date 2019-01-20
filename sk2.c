#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the number");
scanf("%d",&a);
if(a%2==0)
{
printf("EVEN");
}
else if(a%2!=0)
{
printf("ODD");
}
else
{
printf("Print invalid");
}
getch();
}
