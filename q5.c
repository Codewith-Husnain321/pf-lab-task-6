#include <stdio.h>
#include <math.h>

int main()
{
    char mode, operator;
    float num1, num2, result;

    printf("Enter mode:\n");
    printf("1 for Basic Arithmetic\n");
    printf("2 for Power/Root Operations\n");
    scanf(" %c", &mode);

    switch (mode)
    {
        case '1':
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);

            printf("Enter operator (+, -, *, /): ");
            scanf(" %c", &operator);

            switch (operator)
            {
                case '+':
                    result = num1 + num2;
                    printf("Result = %.2f", result);
                    break;

                case '-':
                    result = num1 - num2;
                    printf("Result = %.2f", result);
                    break;

                case '*':
                    result = num1 * num2;
                    printf("Result = %.2f", result);
                    break;

                case '/':
                    if (num2 != 0)
                    {
                        result = num1 / num2;
                        printf("Result = %.2f", result);
                    }
                    else
                    {
                        printf("Cannot divide by zero");
                    }
                    break;

                default:
                    printf("Invalid operator");
            }

            break;

        case '2':
            printf("Enter a number: ");
            scanf("%f", &num1);

            printf("Enter operation (s for square, r for square root): ");
            scanf(" %c", &operator);

            switch (operator)
            {
                case 's':
                    result = num1 * num1;
                    printf("Square = %.2f", result);
                    break;

                case 'r':
                    if (num1 >= 0)
                    {
                        result = sqrt(num1);
                        printf("Square Root = %.2f", result);
                    }
                    else
                    {
                        printf("Cannot find square root of a negative number");
                    }
                    break;

                default:
                    printf("Invalid operation");
            }

            break;

        default:
            printf("Invalid mode");
    }

    return 0;
}