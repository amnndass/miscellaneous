#include <stdio.h>

int linearSearch(int arr[], int size, int target){
    for(int i = 0; i<size; i++){
        if(arr[i] == target){
            return i;
        }
    }

    return -1;
}

int main(){
    //todo: perform linear search in an array

    //declaration
    int arr[5] = {1,3,4,5,6};

    //prompt user to enter element to search
    int element; 
    printf("eneter element to search: ");
    scanf("%d", &element);

    //linear search
    int index = linearSearch(arr, 5, element);

    if(index == -1){
        printf("element not found");
    }else{
        printf("element found at index %d", index);
    }

    return 0;
}
