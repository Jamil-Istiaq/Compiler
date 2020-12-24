#include <stdio.h>
int main()
{
    char str[100];
    //char *p;
     //p=str;

    int i,upper=0,lower=0,vCount=0,cCount=0;



    printf("Enter any string: ");
    fgets(str, 100, stdin);


    for(i=0; str[i]!=0; i++){
    if(str[i]>='A' && str[i]<='Z'){
    upper++;
    }
    else if(str[i]>='a' && str[i]<='z'){
    lower++;
    }
    }

    while(str[i]!='\0')
    {
        if(str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U'
        		||str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
            vCount++;
        else
            cCount++;
        //increase the pointer, to point next character
//        p++;
    }

    printf("Number of Vowels in String: %d\n",vCount);
    printf("Number of Consonants in String: %d\n",cCount);
    printf("Number of Terminal: %d\n",lower);
    printf("Number of Non Terminal: %d",upper);
    return 0;
}
