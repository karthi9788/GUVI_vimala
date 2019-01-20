#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("Enter a char");
scanf("%c",&a);
if(a>='a' && a>='z' ||a>='A' && a>='Z')
{
printf("ALPHABET");
}
else
{
printf("NO");
}
getch();
}
