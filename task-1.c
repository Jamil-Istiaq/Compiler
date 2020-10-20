#include<stdio.h>
#include<conio.h>


int main()
{
    char text[25];
    int i = 0, a = 0;



    puts("Enter Text : ");
    gets(text);
    if(text[0] == '/')
    {
        if(text[1] == '/') {
            printf("A Comment");
        }

    }
    else
    {
        printf("Not a Comment.");
    }
    getch();

}
