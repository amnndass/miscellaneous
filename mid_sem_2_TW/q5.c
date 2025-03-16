// Write a c program to store N elements in 1 D array then check whether the given
//  sequence of elements is in AP or not. Do not use temporary array.
// Ex1. 1,2,3,4,5,6,7  in AP.
// Ex2. 1,2,3,4,5,6,8,11 not in AP.

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int commonDiff = arr[1] - arr[0];

    for( int i = 0; i<n-1; i++){
        if(arr[i+1] - arr[i] != commonDiff){
            printf("not in AP\n");
            return 0;
        }
    }

    printf("in AP\n");

    return 0;
}