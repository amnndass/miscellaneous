// Write a c program to store N elements in 1 D array (including positive ,negative values) , then
// Separate all positive and negative elements at the either side of the array, without altering the     
//  Original sequence of elements. Do not use temporary array.
// Ex. Input: -1, 2, -4, -3, 5, 6,  7, -10, -9, 33
// Output:	     -1, -4, -3, -10,  -9,  2, 5, 6, 7 ,33

// #include <stdio.h>




// void seprateArray (int arr[], int n, int i) {
//     if(i == -1) {
//         return;
//     }

//     printf("here");
//     if(arr[i+1] <0 && arr[i] > 0){
//         swap(&arr[i+1] , &arr[i]);
//         seprateArray(arr, n, i-1);
//     } else seprateArray(arr, n, i+1);


// }

// int main () {
//     int n;
//     int missingTerm = -1;

//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int arr[n];
//     printf("Enter the elements:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     seprateArray(arr, n, 0);

//     for(int i = 0; i<n; i++) {
//         printf("%d ", arr[i] );
//     }
// }

#include <stdio.h>

void swap (int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main () {

    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[50];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int i = 0; int j = n-1;

    while(i < j) {
        if(arr[i] < 0) {
            i++;
        }
        
        if(arr[j] > 0) {
            j--;
        }

        if(arr[i] > 0 && arr[j] < 0) {
            swap(&arr[i], &arr[j]);
        }

    }

    printf("seprated array\n");
    for(int i = 0; i<n; i++) {
        printf("%d", arr[i]);
    }
}