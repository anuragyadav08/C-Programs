#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    FILE *anu=NULL;
    char r,c[100];
    anu=fopen("anurag.txt","a+");
    if(anu==NULL)
    {
        printf("File Not Found");
        exit(1);
    }
     //READ
    while(!feof(anu))
    {
        r=fgetc(anu);
        printf("%c",r);
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
