#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[5]="hello";
char b[3]="hey";
char c[10];
printf("Keshav Garg\n ");
strcpy(c,strcat(a,b));
puts(c);
getch();
}