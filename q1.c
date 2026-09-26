#include <stdio.h>

int main()
{
    int age, ticketPriceWeek, ticketPriceHoliday, finalPrice;
    char day;

    ticketPriceWeek = 1000;
    ticketPriceHoliday = 1200;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter day w for weekday, h for holiday: ");
    scanf(" %c", &day);

    if (age < 12)
    {
        if (day == 'w')
        {
            finalPrice = ticketPriceWeek * 0.60;
        }
        else
        {
            finalPrice = ticketPriceHoliday * 0.80;
        }
    }
    else
    {
        if (age > 60)
        {
            if (day == 'w')
            {
                finalPrice = ticketPriceWeek * 0.60;
            }
            else
            {
                finalPrice = ticketPriceHoliday * 0.80;
            }
        }
        else
        {
            if (day == 'w')
            {
                finalPrice = ticketPriceWeek;
            }
            else
            {
                finalPrice = ticketPriceHoliday;
            }
        }
    }

    printf("Final price: %d", finalPrice);

    return 0;
}