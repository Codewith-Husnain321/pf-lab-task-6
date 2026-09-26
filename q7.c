#include <stdio.h>

int main()
{
    int accountType, transaction;

    printf("Enter Account Type:\n");
    printf("1. Savings\n");
    printf("2. Current\n");
    printf("Enter choice: ");
    scanf("%d", &accountType);

    switch (accountType)
    {
        case 1:
            printf("\nSavings Account\n");
            printf("1. Deposit\n");
            printf("2. Withdraw\n");
            printf("3. Check Balance\n");
            printf("Enter transaction: ");
            scanf("%d", &transaction);

            switch (transaction)
            {
                case 1:
                    printf("Deposit performed in Savings Account.\n");
                    break;

                case 2:
                    printf("Withdrawal performed from Savings Account.\n");
                    break;

                case 3:
                    printf("Checking balance of Savings Account.\n");
                    break;

                default:
                    printf("Invalid transaction choice.\n");
            }
            break;

        case 2:
            printf("\nCurrent Account\n");
            printf("1. Deposit\n");
            printf("2. Withdraw\n");
            printf("3. Check Balance\n");
            printf("Enter transaction: ");
            scanf("%d", &transaction);

            switch (transaction)
            {
                case 1:
                    printf("Deposit performed in Current Account.\n");
                    break;

                case 2:
                    printf("Withdrawal performed from Current Account.\n");
                    break;

                case 3:
                    printf("Checking balance of Current Account.\n");
                    break;

                default:
                    printf("Invalid transaction choice.\n");
            }
            break;

        default:
            printf("Invalid account type.\n");
    }

    return 0;
}