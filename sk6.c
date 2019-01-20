#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf(Enter the year");
scanf("%d"&a);
if(a%4==0 && a%100!=0|| a%4==0)
{
print("Leap year");
}
else
{
printf("not leap year");
}
getch();
}
