// // Your code here...
// #include<stdio.h>
// void prime();

// int main(){
//     // int inputs , n;
//     // scanf("%d", &inputs); 
//     prime();
//     return 0;
// }

// void prime(){
//     int inputs , n;
//     scanf("%d", &inputs);
//     while(n != inputs){
//         scanf("%d", &n);
//     } 
//     while(n >= 0){
//         int result = (n % 1 == 0) && (n % n == 0);
//         printf("%d",result);
//     }
// }; 

#include <stdio.h>

void prime(); // Function prototype

int main() {
    prime(); // Call prime function
    return 0;
}

// Function to check prime numbers
void prime() {
    int inputs, n;

    // Take the number of inputs
    scanf("%d", &inputs);

    // Loop through the given number of inputs
    for (int i = 0; i < inputs; i++) {

        scanf("%d", &n);

        // Check if the number is prime
        int isPrime = 1; // Assume it's prime initially

        if (n < 2) {
            isPrime = 0; // Numbers less than 2 are not prime
        } else {
            for (int j = 2; j * j <= n; j++) {
                if (n % j == 0) {
                    isPrime = 0; // Not a prime number
                    break;
                }
            }
        }

        // Print result
        if (isPrime) {
            printf("%d\n", n);
        } else {
            printf("%d\n", n);
        }
    }
}


