#include <stdio.h>

void checkBalance(float balance) {
    printf("\nCurrent Balance: %.2f\n", balance);
}

float deposit(float balance) {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    if (amount > 0) {
        balance += amount;
        printf("Amount deposited successfully!\n");
    } else {
        printf("Invalid amount!\n");
    }
    return balance;
}

float withdraw(float balance) {
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount > 0 && amount <= balance) {
        balance -= amount;
        printf("Please collect your cash.\n");
    } else {
        printf("Insufficient balance or invalid amount!\n");
    }
    return balance;
}

int main() {
    int choice;
    float balance = 1000.0;  // Initial balance

    printf("=== ATM Simulation System ===\n");

    while (1) {
        printf("\n1. Check Balance");
        printf("\n2. Deposit");
        printf("\n3. Withdraw");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance = deposit(balance);
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                printf("Thank you for using the ATM.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
