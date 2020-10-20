#include<stdio.h>
#include<string.h>

int main(){
    char keyword[32][10]={"auto","double", "break", "else", "long",
    "long", "case", "switch","unsigned","struck"};
    char str[20];
    puts("Enter a string");
    gets(str);

    int flag=0,i;

    for(i=0;i<31;i++){
        if(strcmp(str,keyword[i])==0){
            flag=1;
        }
    }
    if(flag==1){
        printf("%s is a keyword",str);
    }
    else{
         printf("%s is a not a keyword",str);
    }

}
