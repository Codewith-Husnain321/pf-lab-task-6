#include <stdio.h>

int main()
{
    int unitsConsumed, rate, totalBill;
    char connectionType;

    printf("Enter number of units consumed: ");
    scanf("%d", &unitsConsumed);

    printf("\nEnter D for domestic and C for commercial: ");
    scanf(" %c", &connectionType);

    if (connectionType == 'D')
    {
        if (unitsConsumed <= 100)
        {
            rate = 20;
        }
        else
        {
            if (unitsConsumed <= 300)
            {
                rate = 30;
            }
            else
            {
                rate = 40;
            }
        }
    }
    else
    {
        if (connectionType == 'C')
        {
            if (unitsConsumed <= 100)
            {
                rate = 50;
            }
            else
            {
                if (unitsConsumed <= 300)
                {
                    rate = 60;
                }
                else
                {
                    rate = 70;
                }
            }
        }
        else
        {
            printf("Invalid connection type");
            return 0;
        }
    }

    totalBill = rate * unitsConsumed;

    printf("The total electricity bill is: %d", totalBill);

    return 0;
}