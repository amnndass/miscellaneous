// Q10.Write a c program to store N elements in 1 D array then find and print  4th
//   repeating element in the array. Do not use temporary array.

#include <stdio.h>

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
        int counted = 1;

        if(arr[i] == -1){
            continue;
        }

        for(int j = i+1; j<n; j++) {
            if(arr[i] == arr[j]){
                counted++;
                arr[j] = -1;
            }
        }

        if(counted > 1){
            counter++;
        }

        if(counter == 4) {
            printf("%d is the fourth repeating element", arr[i]);
            return 0;
        }
    }

    printf("No fourth repeating element found");
    return 0;
}