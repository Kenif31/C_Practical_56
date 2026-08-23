#include <stdio.h>

int main() {
    int choice;
    float balance = 0.0;
    float amount;

    do {
        // Displaying the menu
        printf("\n------------------ BANK MENU ------------------\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Balance Enquiry\n");
        printf("4. Exit\n");
        
        printf("\nChoice : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nDeposit Amount : ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Successfully deposited $%.2f\n", amount);
                } else {
                    printf("Invalid amount. Please enter a positive value.\n");
                }
                break;

            case 2:
                printf("\nWithdraw Amount : ");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("Insufficient balance! You only have $%.2f\n", balance);
                } else if (amount > 0) {
                    balance -= amount;
                    printf("Successfully withdrew $%.2f\n", amount);
                } else {
                    printf("Invalid amount. Please enter a positive value.\n");
                }
                break;

            case 3:
                printf("\n-----------------------------------------------\n");
                printf("Available Balance : %.2f\n", balance);
                break;

            case 4:
                printf("\nExiting the banking application. Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice. Please select a valid option (1-4).\n");
        }
    } while (choice != 4);

    return 0;
}