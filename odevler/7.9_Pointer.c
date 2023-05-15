#include <stdio.h>

int main(void)
{
    int month = 0;
    int day = 0;
    int year = 0;

    // Format: mm-dd-yyyy
    printf("Enter a date in the form mm-dd-yyyy: ");
    scanf("%d%*c%d%*c%d", &month, &day, &year);
    printf("month = %d day = %d year = %d\n\n", month, day, year);

    // Format: mm/dd/yyyy
    printf("Enter a date in the form mm/dd/yyyy: ");
    scanf("%d%*c%d%*c%d", &month, &day, &year);
    printf("month = %d day = %d year = %d\n", month, day, year);

    // Format: mm-dd-yyyy
    printf("Enter a date in the form mm-dd-yyyy: ");
    scanf("%d-%d-%d", &month, &day, &year);
    printf("month = %d day = %d year = %d\n\n", month, day, year);

    return 0;
}