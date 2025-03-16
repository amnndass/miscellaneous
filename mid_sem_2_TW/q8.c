// Q8 . Write a c program to store N elements in 2 , 1 D arrays say A and  B then find and store 
// Union  of the given arrays.
// Intersection of the given arrays.

#include <stdio.h>

// Function to find the union of two arrays
void findUnion(int A[], int B[], int n1, int n2) {
    int unionArr[n1 + n2];
    int k = 0;

    // Add elements of array A to unionArr
    for (int i = 0; i < n1; i++) {
        unionArr[k++] = A[i];
    }

    // Add elements of array B to unionArr if they are not already in the array
    for (int i = 0; i < n2; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < k; j++) {
            if (B[i] == unionArr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unionArr[k++] = B[i];
        }
    }

    // Print the union
    printf("Union of the arrays: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");
}

// Function to find the intersection of two arrays
void findIntersection(int A[], int B[], int n1, int n2) {
    printf("Intersection of the arrays: ");
    int found = 0;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (A[i] == B[j]) {
                printf("%d ", A[i]);
                found = 1;
                break;
            }
        }
    }

    if (!found) {
        printf("No common elements found.");
    }
    printf("\n");
}

int main() {
    int n1, n2;

    // Input for array A
    printf("Enter the number of elements for array A: ");
    scanf("%d", &n1);
    int A[n1];
    printf("Enter the elements for array A: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &A[i]);
    }

    // Input for array B
    printf("Enter the number of elements for array B: ");
    scanf("%d", &n2);
    int B[n2];
    printf("Enter the elements for array B: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &B[i]);
    }

    // Find and print the union and intersection
    findUnion(A, B, n1, n2);
    findIntersection(A, B, n1, n2);

    return 0;
}
