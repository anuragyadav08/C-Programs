/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    FILE *anu=NULL;
    char r,c[100];
    anu=fopen("anurag.txt","w+");
    if(anu==NULL)
    {
        printf("File Not Found");
        exit(1);
    }
    
     //WRITE
    
   gets(c);
    fprintf(anu,"\t");
    fprintf(anu,"%s",c);
    rewind(anu); //move cursor to starting point
     //READ
    while(!feof(anu))
    {
        r=fgetc(anu);
        printf("%c",r);
    }
   
   fclose(anu);

  return 0;
}
