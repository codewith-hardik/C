// 7 Write a C program to find out distance travelled by the equation d = ut + at^2

// File: distance_formula.c

#include <stdio.h>

int main() {
    float u, a, t, d;

    printf("Enter initial velocity (u in m/s): ");
    scanf("%f", &u);

    printf("Enter time (t in seconds): ");
    scanf("%f", &t);

    printf("Enter acceleration (a in m/s^2): ");
    scanf("%f", &a);

    d = u * t + 0.5 * a * t * t;

    printf("Distance travelled = %.2f meters\n", d);

    return 0;
}
