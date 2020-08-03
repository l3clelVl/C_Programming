//Author:
//Date:
//Purpose: To convert user input of minutes into a table of days and years

#include <stdio.h>
#include <stdlib.h>

int main() {
    /* EnteredMinutes is abbr. to "EM"*/
    int EnteredMinutes;
    double EMInHours, EMInDays, EMInWeeks, EMInYears;
    // Prompt User to enter quantity of minutes
    printf("Enter the number of minutes:\n");
    // Store user input
    scanf("%d", &EnteredMinutes);
    //Declare var values after input to ensure it's stored properly
    EMInHours = (EnteredMinutes / 60);
    EMInDays = (EMInHours / 24);
    EMInWeeks = (EMInDays / 7);
    EMInYears = (EMInDays/ 365.25);
        // output the conversion of minutes to the user
        printf("That is %.2d minutes\n", EnteredMinutes);
        printf("That is %.1f hours\n", EMInHours);
        printf("That is %.2f days\n", EMInDays);
        printf("That is %.1f weeks\n", EMInWeeks);
        printf("That is %.2f years\n", EMInYears);

    return 0;
}
