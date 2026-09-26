#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, largest;

    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    printf("Enter number 3: ");
    scanf("%d", &num3);

    printf("Enter number 4: ");
    scanf("%d", &num4);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            if (num1 > num4)
            {
                largest = num1;
            }
            else
            {
                largest = num4;
            }
        }
        else
        {
            if (num3 > num4)
            {
                largest = num3;
            }
            else
            {
                largest = num4;
            }
        }
    }
    else
    {
        if (num2 > num3)
        {
            if (num2 > num4)
            {
                largest = num2;
            }
            else
            {
                largest = num4;
            }
        }
        else
        {
            if (num3 > num4)
            {
                largest = num3;
            }
            else
            {
                largest = num4;
            }
        }
    }

    printf("The largest number is: %d", largest);

    return 0;
}