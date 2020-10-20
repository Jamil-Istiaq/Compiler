#include<stdio.h>
#include<string.h>

int main()
{
    char box[5];
    int x,i;
    puts("Enter the value:");
    gets(box);

    x=strlen(box);

        for (i=0;i<x;i++)
        if(!isdigit(box[i]))
        {
            printf("Is not a number");

        }
        else
            {
                printf("Is a number");
            }

    }
