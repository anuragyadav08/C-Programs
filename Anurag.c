#include<stdio.h>
#include<conio.h>

void main()
{
 char c[20];
 int i;
 clrscr();
 FILE*p;
 p=fopen("Anu.txt","w");
 gets(c);
 fprintf(p,"%s",c);
 fclose(p);
 getch();
}
