/*
    Author: |3c|e|\/|
    Purpose: Calculate the area and perimeter of a rectangle from user input
    Date: 27Jul2020
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double RecWidth, RecHeight, RecPerim, RecArea;

    printf("What is the width?   ");
    scanf("%lf", &RecWidth);
    printf("\nWhat is the height?   ");
    scanf("%lf", &RecHeight);

    RecPerim = 2 * RecHeight + RecWidth;
    RecArea = RecWidth * RecHeight;

    printf("\n\nYour results are:\nRectangle's width: %0.1lf\n", RecWidth);
    printf("Rectangle's height: %0.1lf\n\n", RecHeight);
    printf("Rectangle's area: %0.1lf\n", RecArea);
    printf("Rectangle's perimeter: %0.1lf\n\n", RecPerim);
    printf("Calculating Area = (%0.1lf * %0.1lf)\n", RecWidth, RecHeight);
    printf("Calculating Perimeter = 2 * (%0.1lf + %0.1lf)\n", RecWidth, RecHeight);

    return 0;
}
