#include <stdio.h>

int main()
{
    int vehicleType;
    int age;
    int hasPass;
    int isWeekend;
    int isPeakHour;
    int hours;

    float originalFee = 0;
    float surcharge = 0;
    float discount = 0;
    float finalAmount = 0;

    printf("Enter vehicle type (1-Car, 2-Motorcycle, 3-Electric Vehicle): ");
    scanf("%d", &vehicleType);

    printf("Enter driver age: ");
    scanf("%d", &age);

    printf("Has parking pass? (1-Yes, 0-No): ");
    scanf("%d", &hasPass);

    printf("Is it weekend? (1-Yes, 0-No): ");
    scanf("%d", &isWeekend);

    printf("Is it peak hour? (1-Yes, 0-No): ");
    scanf("%d", &isPeakHour);

    printf("Enter parking hours: ");
    scanf("%d", &hours);

    if (vehicleType < 1)
    {
        printf("Invalid vehicle type");
    }
    else
    {
        if (vehicleType > 3)
        {
            printf("Invalid vehicle type");
        }
        else
        {
           

            if (age < 18)
            {
                printf("Driver is under 18");
            }
            else
            {
               

                if (hasPass == 1)
                {
                    /* Entry allowed */
                    
                    if (vehicleType == 3)
                    {
                        if (hours <= 3)
                        {
                            originalFee = 0;
                        }
                        else
                        {
                            originalFee = (hours - 3) * 100;
                        }
                    }
                    else
                    {
                        if (vehicleType == 2)
                        {
                            originalFee = hours * 100;
                        }
                        else
                        {
                            originalFee = hours * 200;
                        }
                    }

                  

                    if (isWeekend == 1)
                    {
                        if (isPeakHour == 1)
                        {
                            surcharge = originalFee * 0.20;
                        }
                    }

                    finalAmount = originalFee + surcharge;


                    if (hasPass == 1)
                    {
                        discount = finalAmount * 0.25;
                    }

                    finalAmount = finalAmount - discount;

                    printf("\nVehicle is allowed to enter.\n");

                    if (vehicleType == 1)
                    {
                        printf("Vehicle Type: Car\n");
                    }
                    else
                    {
                        if (vehicleType == 2)
                        {
                            printf("Vehicle Type: Motorcycle\n");
                        }
                        else
                        {
                            printf("Vehicle Type: Electric Vehicle\n");
                        }
                    }

                    printf("Parking Hours: %d\n", hours);
                    printf("Original Parking Fee: Rs. %.2f\n", originalFee);
                    printf("Surcharge: Rs. %.2f\n", surcharge);
                    printf("Discount: Rs. %.2f\n", discount);
                    printf("Final Amount: Rs. %.2f\n", finalAmount);
                }
                else
                {
                    if (isWeekend == 0)
                    {

                        if (vehicleType == 3)
                        {
                            if (hours <= 3)
                            {
                                originalFee = 0;
                            }
                            else
                            {
                                originalFee = (hours - 3) * 100;
                            }
                        }
                        else
                        {
                            if (vehicleType == 2)
                            {
                                originalFee = hours * 100;
                            }
                            else
                            {
                                originalFee = hours * 200;
                            }
                        }

                        if (isWeekend == 1)
                        {
                            if (isPeakHour == 1)
                            {
                                surcharge = originalFee * 0.20;
                            }
                        }

                        finalAmount = originalFee + surcharge;

                        printf("\nVehicle is allowed to enter.\n");

                        if (vehicleType == 1)
                        {
                            printf("Vehicle Type: Car\n");
                        }
                        else
                        {
                            if (vehicleType == 2)
                            {
                                printf("Vehicle Type: Motorcycle\n");
                            }
                            else
                            {
                                printf("Vehicle Type: Electric Vehicle\n");
                            }
                        }

                        printf("Parking Hours: %d\n", hours);
                        printf("Original Parking Fee: Rs. %.2f\n", originalFee);
                        printf("Surcharge: Rs. %.2f\n", surcharge);
                        printf("Discount: Rs. %.2f\n", discount);
                        printf("Final Amount: Rs. %.2f\n", finalAmount);
                    }
                    else
                    {
                        if (vehicleType == 3)
                        {

                            if (hours <= 3)
                            {
                                originalFee = 0;
                            }
                            else
                            {
                                originalFee = (hours - 3) * 100;
                            }

                            if (isWeekend == 1)
                            {
                                if (isPeakHour == 1)
                                {
                                    surcharge = originalFee * 0.20;
                                }
                            }

                            finalAmount = originalFee + surcharge;

                            printf("\nVehicle is allowed to enter.\n");
                            printf("Vehicle Type: Electric Vehicle\n");
                            printf("Parking Hours: %d\n", hours);
                            printf("Original Parking Fee: Rs. %.2f\n", originalFee);
                            printf("Surcharge: Rs. %.2f\n", surcharge);
                            printf("Discount: Rs. %.2f\n", discount);
                            printf("Final Amount: Rs. %.2f\n", finalAmount);
                        }
                        else
                        {
                            printf("Parking entry conditions not satisfied");
                        }
                    }
                }
            }
        }
    }

    return 0;
}