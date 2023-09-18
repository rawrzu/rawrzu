#include <stdio.h>

int main(void) {
    // Ask the user for their credit card number
    long cardNumber;
    printf("Please enter your credit card number: ");
    scanf("%ld", &cardNumber);

    // Extract and store individual digits of the card number
    int digitCount = 0;
    int cardDigits[100]; // Store individual digits in an array

    do {
        int digit = cardNumber % 10; // Get the last digit
        cardDigits[digitCount] = digit; // Store the digit
        digitCount++;
        cardNumber = cardNumber / 10; // Move to the next digit
    } while (cardNumber >= 1);

    // Print selected digits from the card number
    printf("Selected digits: ");
    for (int i = 0; i < digitCount; i++) {
        if (i == 0  i == 2  i == 4) {
            printf("%d ", cardDigits[i]);
        }
    }
    printf("\n");

    return 0;
}
