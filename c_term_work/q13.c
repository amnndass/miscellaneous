#include <stdio.h>
#include <stdlib.h>

int main(){
    //todo: dynamically allocate memeory for array to prefom operation on it
    int n; 
    printf("enter number of elements in the array: ");
    scanf("%d", &n);

    int *ptr = (int*)malloc(n * sizeof(int));

    if(ptr == NULL){
        printf("memory allocation failed");
        return 0;
    }

    //taking input elements of array
    printf("enter %d elements\n", n);
    for(int i = 0; i<n; i++){
        scanf("%d", &ptr[i]);
    }

    //printing the array
    for(int i = 0; i<n; i++){
        printf("%d ", ptr[i]);
    }

    free(ptr);
}