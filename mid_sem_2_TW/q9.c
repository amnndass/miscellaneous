// Write a c program to store N elements in 1 D array then find and
//  print  4th non- repeating element in the array. Do not use temporary array.

#include <stdio.h>

int isNonRepeating(int arr[], int key, int n) {
    int counter = 0;
    for(int i = 0; i<n; i++) {
        if(arr[i] == key){
            counter++;
        }
    }

    if(counter > 1) {
        return 0;
    }

    return 1;
}

int main () {
    int i,n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int counter = 0;

    for(i = 0 ; i<n; i++) {
        if(isNonRepeating(arr, arr[i], n)){
            counter++;
        }

        if(counter == 4) {
            printf("%d is the fourth non repeating element", arr[i]);
        }
    }

}