#include <stdio.h>
#include <stdbool.h>

int findLCM(int a , int b){
    int lcm = (a > b) ? a : b;

    while(true){
        if(lcm % a == 0 && lcm % b == 0){
            return lcm;
        }else{
            lcm++;
        }
    }
}

int main(){
    //todo : find lcm of two numbers
    int a, b;

    //taking input form the user
    printf("enter number 1 : ");
    scanf("%d", &a);

    printf("enter number 2 : ");
    scanf("%d", &b);

    int lcm = findLCM(a, b);

    //printing the answer
    printf("lcm of %d and %d is %d", a, b, lcm);
}