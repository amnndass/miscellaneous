#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int size){
    //declare variables for this funciton
    int first , second;
    //intitialise it with -1
    first = second = INT_MIN;

    for(int i = 0; i<size; i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        }else if(arr[i] > second && arr[i] != first){
            second = arr[i];
        }
    }

    return second;
}


int main(){
    //todo: find the second largest element in the array

    //approach: take two global variables first and second

    //decalaration of the array
    int arr[10] = {1,2,3,4,5,6,7,8,0,-1};

    //find the second larget element
    int secondLargestElement = findSecondLargest(arr, 10);

    //printing second largest element
    printf("second largest element is %d", secondLargestElement);
}