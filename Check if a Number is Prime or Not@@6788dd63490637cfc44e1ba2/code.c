// #include <stdio.h>
// int main() {
//     int a;
//     scanf("%d", &a);
//     for(int i=1;i<=a;i++){
//         if(i%1==0 && i%a==0){
//             printf("Prime\n");
//         }
//         else{
//             printf("Not Prime\n");
//         }
//     }
//     return 0;
// }


#include <stdio.h>
#include <math.h>

int main() {
    int num, isPrime = 1; // Assume the number is prime initially

    // Get input from the user
    scanf("%d", &num);

    // Handle special cases
    if (num <= 1) {
        isPrime = 0;  // Numbers less than or equal to 1 are not prime
    } else if (num == 2) {
        // 2 is prime
        isPrime = 1;
    } else if (num % 2 == 0) {
        isPrime = 0;  // All even numbers greater than 2 are not prime
    } else {
        // Check divisibility from 3 to sqrt(num)
        for (int i = 3; i <= sqrt(num); i += 2) {
            if (num % i == 0) {
                isPrime = 0;  // Found a divisor, not a prime number
                break;
            }
        }
    }

    // Output the result
    if (isPrime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}
