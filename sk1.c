#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the number");
scanf("%d",&a);
if(a<0)
{
printf("Negative");
}
else if(a>0)
{
printf("{Positive");
}
else
{
printf("Zero");
}
getch();
}
