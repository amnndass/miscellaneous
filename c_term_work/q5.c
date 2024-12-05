#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPallindrome(char str[]){
    int s = 0; 
    int e = strlen(str)-1;
    

    while(s < e){
        if(str[s++] != str[e--]){
            return false;
        }
    }

    return true;
}

int main(){
    //todo: program to check if a string is a pallindrome
    //approach: take two pointer and check and increment and derement

    //declaration
    char str[100];

    //input
    printf("enter string\n");
    scanf("%s", &str);

    //check
    if(isPallindrome(str)){
        printf("string is a pallindrome\n");
    }else{
        printf("string is not a pallindrome\n");
    }

    return 0;
}