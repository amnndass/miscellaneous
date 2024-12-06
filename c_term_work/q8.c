#include <stdio.h>

int sum(int *a, int *b){
    return *a+*b;
}

int main(){
    //todo: sum of digits usng function
    int a , b;

    //taking inputs
    printf("enter number 1\n");
    scanf("%d", &a);
    
    printf("enter number 2\n");
    scanf("%d", &b);

    printf("sum is: %d",sum(&a,&b));
}