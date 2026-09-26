#include <stdio.h>

int main()
{
    int side1, side2, side3, validCheck;

    printf("Enter side 1: ");
    scanf("%d", &side1);

    printf("Enter side 2: ");
    scanf("%d", &side2);

    printf("Enter side 3: ");
    scanf("%d", &side3);

    validCheck = 0;

    if ((side1 + side2) > side3)
    {
        if ((side1 + side3) > side2)
        {
            if ((side2 + side3) > side1)
            {
                validCheck = 1;
            }
        }
    }

    if (validCheck == 1)
    {
        printf("It is a valid triangle\n");

        if (side1 == side2)
        {
            if (side1 == side3)
            {
                printf("It is an Equilateral triangle");
            }
            else
            {
                printf("It is an Isosceles triangle");
            }
        }
        else
        {
            if (side1 == side3)
            {
                printf("It is an Isosceles triangle");
            }
            else
            {
                if (side2 == side3)
                {
                    printf("It is an Isosceles triangle");
                }
                else
                {
                    printf("It is a Scalene triangle");
                }
            }
        }
    }
    else
    {
        printf("It is not a valid triangle");
    }

    return 0;
}