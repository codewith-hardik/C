// Write a C program to enter a distance into kilometer and convert it in to meter, feet,
// inches and centimeter 

// 1 kilometer = 1000 meters

// 1 kilometer = 3280.84 feet

// 1 kilometer = 39370.1 inches

// 1 kilometer = 100000 centimeters

#include <stdio.h>
int main(){
    float km, meters, feet, inches, centimeters;

    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    meters = km * 1000;
    feet = km * 3280.84;
    inches = km * 39370.1;
    centimeters = km * 100000;

    printf("\nDistance in different units:\n");
    printf("Meters      = %.2f m\n", meters);
    printf("Feet        = %.2f ft\n", feet);
    printf("Inches      = %.2f in\n", inches);
    printf("Centimeters = %.2f cm\n", centimeters);

}