#include <stdio.h>

int main(){
    //todo: check frequency of each character in a string
    char str[] = "aaccddeefff";

    int arr[26] = {0};

    for(int i = 0; i<sizeof(str)-1; i++){
        int index = (str[i] - 'a') + 1;
        arr[index]++;
    }

    for(int i = 0; i<26; i++){
        if(arr[i] != 0){
            char word = ('a' + i) -1;
            printf("character %c appears %d times\n", word, arr[i]);
        }
    }

    
}