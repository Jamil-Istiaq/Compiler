#include<stdio.h>
#include<conio.h>


int main()
{
    char text[25];
    int i = 0, a = 0;

    puts("Enter Text : ");
    gets(text);
    if(text[1] == '*')
        {
            for(i = 2; i <= 25; i++)
            {
                if(text[i] == '*' && text[i + 1] == '/')
                {
                    printf(" A Comment");

                    break;
                }

            }


        }
        else{
            puts("Not a Comment");
        }

        getch();
}
