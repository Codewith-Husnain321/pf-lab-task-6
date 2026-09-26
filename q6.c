#include <stdio.h>

int main()
{
    char light, pedestrian;

    printf("Enter traffic light color (R, Y, G): ");
    scanf(" %c", &light);

    switch (light)
    {
        case 'R':
            printf("Enter pedestrian button status (Y for Yes, N for No): ");
            scanf(" %c", &pedestrian);

            switch (pedestrian)
            {
                case 'Y':
                    printf("Stop and allow pedestrians to cross.");
                    break;

                case 'N':
                    printf("Stop and wait.");
                    break;

                default:
                    printf("Invalid pedestrian button choice.");
            }

            break;

        case 'Y':
            printf("Slow down and prepare to stop.");
            break;

        case 'G':
            printf("Enter pedestrian button status (Y for Yes, N for No): ");
            scanf(" %c", &pedestrian);

            switch (pedestrian)
            {
                case 'Y':
                    printf("Go but watch for pedestrians.");
                    break;

                case 'N':
                    printf("Go.");
                    break;

                default:
                    printf("Invalid pedestrian button choice.");
            }

            break;

        default:
            printf("Invalid traffic light color.");
    }

    return 0;
}