// Q2. Write a c program to store N elements in 1 D array (including positive ,negative and zero) , then separate 
// and store them in different arrays(ie. Positive ,negative and zero). Do not use temporary array.

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

    int positive[n], negative[n], zero[n];
    int pos_Count = 0, neg_Count = 0, zero_Count = 0;

    for ( int i =0 ; i<n; i++) {
        if(arr[i] == 0){
            zero[zero_Count++] = arr[i];
        } else if (arr[i] > 0) {
            positive[pos_Count++] = arr[i];
        } else if (arr[i] < 0) {
            negative[neg_Count++] = arr[i];
        }
    }

    printf("positive Numbers\n");
    for(int i = 0; i<pos_Count ; i++) {
        printf("%d ", positive[i]);
    }

    printf("\n");


    printf("negative Numbers\n");
    for(int i = 0; i<neg_Count ; i++) {
        printf("%d", negative[i]);
    }

    printf("\n");

    printf("zero Numbers\n");
    for(int i = 0; i<zero_Count ; i++) {
        printf("%d", zero[i]);
    }

    printf("\n");

    return 0;

}