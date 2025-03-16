// Q3. Write a c program to store N elements in 1 D array then swap 
// the content of the array and finally display the content after swapping. Do not use temporary array.

#include <stdio.h>

void swap (int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    //swapping logic
    for(int i = 0; i < n/2; i++){
        swap(&arr[i], &arr[n - i - 1]);
    }

    //print after swapping
    for(int i = 0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}