#include <stdio.h>
#define MAX 50
#define PI 3.1416



int main(){

    char input[MAX];
    puts (" Enter value: ");
    gets (input);
    int i;
    int length = strlen(input);
    for (i = 0; i<length; i++ ){

        if(!isdigit(input[i])){

            printf("Input is not a Number");
            break;

        }

        else {

            printf("Input is a Number");
            break;

        }

    }

    return 0;
}
