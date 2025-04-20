#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TRANSACTIONS 5

// Hardcoded credentials
#define USER_PIN 1234
#define INITIAL_BALANCE 10000.0

// Global variables
float balance = INITIAL_BALANCE;
char transaction_log[MAX_TRANSACTIONS][50];
int transaction_count = 0;

// Function Prototypes
int verifyPIN();
void displayMenu();
void checkBalance();
void deposit();
void withdraw();
void logTransaction(const char *msg);
void viewMiniStatement();

int main() {
    int choice, pin_attempts = 0;

    printf("******** Welcome to C-Language ATM ********\n");

    // PIN Verification
    while (pin_attempts < 3) {
        if (verifyPIN()) {
            printf("✅ PIN Verified Successfully!\n\n");

            do {
                displayMenu();
                printf("Enter your choice: ");
                if (scanf("%d", &choice) != 1) {
                    printf("Invalid input. Exiting...\n");
                    break;
                }

                switch (choice) {
                    case 1:
                        checkBalance();
                        break;
                    case 2:
                        deposit();
                        break;
                    case 3:
                        withdraw();
                        break;
                    case 4:
                        viewMiniStatement();
                        break;
                    case 5:
                        printf("🔒 Thank you for using our ATM. Goodbye!\n");
                        break;
                    default:
                        printf("❌ Invalid choice. Please try again.\n");
                }

            } while (choice != 5);

            break;
        } else {
            pin_attempts++;
            printf("❌ Incorrect PIN. Attempts left: %d\n", 3 - pin_attempts);
        }
    }

    if (pin_attempts == 3) {
        printf("🔐 Too many wrong attempts. Exiting...\n");
    }

    return 0;
}

// Function to verify PIN
int verifyPIN() {
    int pin;
    printf("Enter your 4-digit PIN: ");
    scanf("%d", &pin);
    return pin == USER_PIN;
}

// Function to display ATM menu
void displayMenu() {
    printf("\n======= ATM Menu =======\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. View Mini Statement\n");
    printf("5. Exit\n");
}

// Function to check balance
void checkBalance() {
    printf("💰 Your current balance is: ₹%.2f\n", balance);
    logTransaction("Checked balance");
}

// Function to deposit amount
void deposit() {
    float amount;
    printf("Enter amount to deposit: ₹");
    scanf("%f", &amount);

    if (amount > 0) {
        balance += amount;
        printf("✅ ₹%.2f deposited successfully!\n", amount);

        char log[50];
        sprintf(log, "Deposited ₹%.2f", amount);
        logTransaction(log);
    } else {
        printf("❌ Invalid amount entered.\n");
    }
}

// Function to withdraw amount
void withdraw() {
    float amount;
    printf("Enter amount to withdraw: ₹");
    scanf("%f", &amount);

    if (amount > 0 && amount <= balance) {
        balance -= amount;
        printf("✅ ₹%.2f withdrawn successfully!\n", amount);

        char log[50];
        sprintf(log, "Withdrew ₹%.2f", amount);
        logTransaction(log);
    } else if (amount > balance) {
        printf("❌ Insufficient balance!\n");
    } else {
        printf("❌ Invalid amount entered.\n");
    }
}

// Function to store transactions
void logTransaction(const char *msg) {
    if (transaction_count < MAX_TRANSACTIONS) {
        strcpy(transaction_log[transaction_count++], msg);
    } else {
        for (int i = 1; i < MAX_TRANSACTIONS; i++) {
            strcpy(transaction_log[i - 1], transaction_log[i]);
        }
        strcpy(transaction_log[MAX_TRANSACTIONS - 1], msg);
    }
}

// Function to display last few transactions
void viewMiniStatement() {
    printf("🧾 Mini Statement (Last %d Transactions):\n", MAX_TRANSACTIONS);
    for (int i = 0; i < transaction_count; i++) {
        printf(" %d. %s\n", i + 1, transaction_log[i]);
    }
}
