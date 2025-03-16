// Q11.Write a c program to store N multi digit elements in 1 D array then count and print 
    // a) total palindrome 
//    b) total prime no.
//   c) total Armstrong no.
//   d) total elements having sum of digits less than 10  


#include <stdio.h> 
#include <math.h>
#include <stdbool.h>

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to check if a number is an Armstrong number
bool isArmstrong(int num) {
    int original = num, sum = 0, digits = 0;
    while (num > 0) {
        digits++;
        num /= 10;
    }
    num = original;
    while (num > 0) {
        sum += pow(num % 10, digits);
        num /= 10;
    }
    return sum == original;
}

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Main logic
int main() {
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter %d multi-digit elements:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int palindromeCount = 0, primeCount = 0, armstrongCount = 0, sumLessThan10Count = 0;

    for (int i = 0; i < N; i++) {
        if (isPalindrome(arr[i])) palindromeCount++;
        if (isPrime(arr[i])) primeCount++;
        if (isArmstrong(arr[i])) armstrongCount++;
        if (sumOfDigits(arr[i]) < 10) sumLessThan10Count++;
    }

    printf("Total palindromes: %d\n", palindromeCount);
    printf("Total prime numbers: %d\n", primeCount);
    printf("Total Armstrong numbers: %d\n", armstrongCount);
    printf("Total elements with sum of digits less than 10: %d\n", sumLessThan10Count);

    return 0;
}