//check giver input string it is identifier or eq

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
int i=1;
char s[20];

puts("Enter the string: ");
gets(s);

//group character
//first character does not support numeric
//it supports first char as a alphabetic
//abc,int,sum,add, add_
//_abc is not a identifier.

if(isalpha(s[0]))
    while(i<strlen(s))
    if(isdigit(s[i]) || isalnum(s[i]) || s[i]=='_')
    i++;
    else{
        puts("Given input is not identifier");
        getch();
        exit(0);
    }
    else{
        puts("Given input is not identifier");

    getch();
        exit(0);
    }
   puts("Given input is identifier");
   getch();





}
