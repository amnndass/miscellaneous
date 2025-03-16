// Write a c program to store N elements in 1 D array then check whether the given sequence of
//  elements is in AP with one missing term if there is a missing tem print the series including
// the missing term . Do not use temporary array.

#include <stdio.h>

void fixAP (int arr[], int position, int commonDiff, int size) {
    for(int i = size+1; i>position;i-- ) {
        arr[i] = arr[i-1];
    }
    arr[position+1] = arr[position] + commonDiff;
}

int main () {
    int n;
    int missingTerm = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[50];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int commonDiff = arr[1] - arr[0];

    int toleranceCounter = 1;

    for(int i = 0; i<n-1; i++) {
        if(arr[i+1] - arr[i] != commonDiff ) {
            if(arr[i] + (commonDiff*2) == arr[i+1] && toleranceCounter==1){
                toleranceCounter = 0;
                missingTerm = arr[i] + (commonDiff);
                fixAP(arr, i, commonDiff, n);
            } else {
                printf("not AP");
                return 0;
            }
        }
    }

    if(toleranceCounter == 0) {
        //print new array
        printf("missing term is %d\n", missingTerm);
        printf("fixed AP\n");

        for(int i = 0; i<n+1; i++) {
            printf("%d ", arr[i] );
        }
    }

    printf("\nin AP\n");
}