#include <stdio.h>

int main(){
    FILE *f = fopen("text.txt", "w");

    if(f == NULL){
        printf("something");
    }

    char *message = "somethings";
    fputs(message, f);
    fputs(message, f);

    fclose(f);
}