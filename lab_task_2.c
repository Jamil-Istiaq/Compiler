#include<stdio.h>
#include<string.h>



int main(){

    FILE *fp;
    char data[50];
    printf("Opening the file ");
    fp = fopen("test.txt", "a");
    if(fp == NULL){



        printf("Could not open the file ");
        return 1;
    }
    printf("\nEnter some text write in the file: ");



        while(strlen(gets(data))> 0){



            fputs(data, fp);
            fputs("\n", fp);
        }
        printf("Closing the file");
        fclose(fp);
        return 0;




       }
