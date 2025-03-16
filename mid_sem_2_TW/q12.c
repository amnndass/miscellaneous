// Q12.  Write a c program to store N sorted sequence of elements in 2 , 1- D arrays say A and  B then merge them and store in 3rd 1-D arrays finally display the sorted array(i.e 3rd   1-D).
// Ex.  A= 1,3,5,7,9,11
        // B= 2, 4, 6, 8, 10, 12, 14
    //   Output C= 1,2,3,4,5,6,7,8,9,10,11,12,14


#include <stdio.h>

int main () {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], arr3[2*n];

    printf("Enter the elements of array 1:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of array 2:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int i = 0, j = 0, k = 0;

    while (i < n && j < n) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < n) {
        arr3[k++] = arr1[i++];
    }

    while (j < n) {
        arr3[k++] = arr2[j++];
    }

    printf("Merged array:\n");
    for (int i = 0; i < 2*n; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}