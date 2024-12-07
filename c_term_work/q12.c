#include <stdio.h>

int main(){
    //todo: find length of string using a pointer
    
    char str[100];

    //input string
    printf("enter string\n");
    scanf("%s", &str);

    char *ptr = str;

    //finding length of string
    int count = 0; 
    while(*ptr != '\0'){
        ptr++;
        count++;
    }

    printf("total character in string is %d\n", count);
}