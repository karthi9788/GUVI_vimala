#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the N times to repeat hello");
scanf("%d",&a);
while(a>0)
{
printf("hello");
a--;
}
getch();
}
