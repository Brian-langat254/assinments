#include <stdio.h>

int main() {
    int age;
    float income;

    // Get user input for there age
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income: ");
    scanf("%f", &income);

    // Check if the customer qualifies for the loan
    if (age >= 21 && income >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}