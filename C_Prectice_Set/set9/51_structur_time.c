// Define structure called time_struct containing three members like integer hour,
// integer minute and integer second. Develop a program that would assign values to the
// individual number and display the time in the following format: 16:40:51 


#include <stdio.h>

// Define structure
struct time_struct {
    int hour;
    int minute;
    int second;
};

int main() {
    struct time_struct t;

    // Assigning values
    t.hour = 16;
    t.minute = 40;
    t.second = 51;

    // Displaying time
    printf("The time is: %d:%d:%d\n", t.hour, t.minute, t.second);

    return 0;
}
