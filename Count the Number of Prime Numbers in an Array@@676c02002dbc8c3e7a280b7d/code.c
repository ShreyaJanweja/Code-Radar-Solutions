// Your code here...
// Your code here...
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    
    scanf("%d", &n);

    int arr[n];
    
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int primeCount = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i]))
            primeCount++;
    }

    printf("%d\n", primeCount);
    return 0;
}