#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,sum=0;
int a[10];
clrscr();
printf("Enter the n and k");
scanf("%d%d",&n,&k);
printf("Enter the array");
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("%d",sum);
getch();
}
