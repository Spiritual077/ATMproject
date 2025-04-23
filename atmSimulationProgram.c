#include <stdio.h>

// Function declarations
void checkBalance(float balance);
float depositMoney(float balance);
float withdrawMoney(float balance);

int main() {
    float balance = 1000.0; // Starting balance (hardcoded)
    int choice;
    int running = 1; // To keep the program running

    // Loop to keep showing the menu until user exits
    while (running) {
        // Display menu options
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice); // Take input from user

        // Use switch-case to handle menu options
        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance = depositMoney(balance);
                break;
            case 3:
                balance = withdrawMoney(balance);
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                running = 0; // Stop the loop
                break;
            default:
                printf("Invalid choice! Please choose 1-4.\n");
        }
    }

    return 0;
}

// Function to show current balance
void checkBalance(float balance) {
    printf("Your current balance is: %.2f\n", balance);
}

// Function to deposit money
float depositMoney(float balance) {
    float deposit;
    printf("Enter amount to deposit: ");
    scanf("%f", &deposit);

    if (deposit <= 0) {
        printf("Invalid amount! Please enter more than 0.\n");
    } else {
        balance += deposit; // Add deposit to balance
        printf("%.2f deposited successfully.\n", deposit);
    }

    return balance; // Return updated balance
}

// Function to withdraw money
float withdrawMoney(float balance) {
    float withdraw;
    printf("Enter amount to withdraw: ");
    scanf("%f", &withdraw);

    if (withdraw <= 0) {
        printf("Invalid amount! Please enter more than 0.\n");
    } else if (withdraw > balance) {
        printf("Insufficient balance! You only have %.2f\n", balance);
    } else {
        balance -= withdraw; // Subtract withdraw from balance
        printf("%.2f withdrawn successfully.\n", withdraw);
    }

    return balance; // Return updated balance
}
