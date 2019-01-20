#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("Enter a char");
scanf("%c",&a);
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='v')
{
printf("Vowel");
}
else
{
printf("Character");
}
getch();
}
