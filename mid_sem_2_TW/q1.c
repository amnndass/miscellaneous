// Q1. Write a c program to store N elements in 1 D array 
// then  count and print total even and odd elements in the array.

#include <stdio.h>

int storeElementsInArray (int *n) {
    
    int *arr = (int*) malloc(*n * sizeof(int));
    printf("enter number of elements\n");
    scanf("%d", &n);

    printf("enter elements\n");
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    return arr;
}

int main(){
    int n;
    storeElementsInArray(&n);

}