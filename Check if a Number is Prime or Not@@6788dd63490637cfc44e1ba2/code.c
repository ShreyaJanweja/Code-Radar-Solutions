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

int main() {
    int num, i;
    int isPrime = 1; // Assume the number is prime

    // Get input from the user
    scanf("%d", &num);

    // Handle special cases
    if (num <= 1) {
        isPrime = 0;  // Numbers less than or equal to 1 are not prime
    } else {
        // Check if the number is divisible by any number from 2 to num/2
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; // Found a divisor, so it's not prime
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
