#include <stdio.h>
#include <string.h>

int countVovels(char s[]){
    char vovels[5] = {'a', 'e', 'i', 'o', 'u'};

    int count = 0;

    for(int i = 0; i<strlen(s); i++){
        for(int j = 0; j<5; j++){
            if(s[i] == vovels[j]){
                count++;
            }
        }
    }

    return count;
}

int main(){
    //todo: count vovels in a stirng usnig function
    
    char str[] = "aeiouuuuuu";

    //function to count vovels
    int vovels = countVovels(str);

    //printing the result
    printf("number of vovels is : %d", vovels);
    
    return 0;
}