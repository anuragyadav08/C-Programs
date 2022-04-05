#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
struct emp{
    char id[20];
    char name[20];
    char address[20];
    char mob[10];
    char design[20];
} e[50];

void main()
{
    char r;
    int i,n;
    FILE *f=NULL;
    clrscr();
    f=fopen("employee.txt","w+");
    if(f==NULL)
    {
	printf("File Not Found !");
	exit(1);
    }
    printf("Enter No. of Employee:");
    scanf("%d",&n);
    //write
    for(i=1;i<=n;i++)
    {
    printf("Enter ID :");
    gets(e[i].id);
    fprintf(f,"ID: %s\n",e[i].id);
    printf("Enter Name :");
    gets(e[i].name);
    fprintf(f,"Name: %s\n",e[i].name);
    printf("Enter Address :");
    gets(e[i].address);
    fprintf(f,"Address: %s\n",e[i].address);
    printf("Enter Mobile No. :");
    gets(e[i].mob);
    fprintf(f,"Mobile No.: %s\n",e[i].mob);
    printf("Enter Designation :");
    gets(e[i].design);
    fprintf(f,"Designation: %s\n\n",e[i].design);

    }
    rewind(f);
     //read
     printf("\nDetails of Employee :\n");
     while(!feof(f))
     {
	 r=fgetc(f);
	 printf("%c",r);
     }
    fclose(f);
    getch();
}
