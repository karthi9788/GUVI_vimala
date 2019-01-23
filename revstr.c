#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int n,i;
clrscr();
printf(" enter n");
scanf("%d",&n);
printf("Enter array");
for(i=0;i<n;i++)
{
scanf("%c",&a[i]);
}
for(i=n-1;i>=0;i--)
{
printf("%c",a[i]);
}
getch();
}
