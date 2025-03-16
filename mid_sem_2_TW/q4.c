//      

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

    for( int i = 0; i<n; i++) {
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

        printf("%d occours %d times in the array\n", arr[i], counted);
    }

    return 0;

}