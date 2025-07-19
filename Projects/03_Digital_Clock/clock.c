// Digital clock: This project implements a digital clock using C programming language.
// by @hardik




#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // For sleep function
#include <time.h>


int input_format();
void clean_screen();
void fill_time(char*,int);
void fill_date(char*);

int main(){

    char time[50], date[100];
    int format = input_format(); // Function to get the time format from the user

    while (1)
    {
        fill_time(time, format); // Function to fill the time string with the current time
        fill_date(date); // Function to fill the date string with the current date
        clean_screen(); // Function to clear the console screen
        printf("Current Time : %s\n", time); // Print the current time
        printf("Date : %s\n", date);

        sleep(1);
        
    }
    

}


void fill_time(char* buffer, int format){
    time_t raw_time;
    struct tm *current_time;

    time(&raw_time); // Get the current time
    current_time = localtime(&raw_time); // Convert to local time

    if (format == 1) { // 12-hour format
        strftime(buffer, 50, "%I:%M:%S %p", current_time);
    } else { // 24-hour format
        strftime(buffer, 50, "%H:%M:%S", current_time);
    }
}

void fill_date(char* date){
    time_t raw_time;
    struct tm *current_time;

    time(&raw_time); // Get the current time
    current_time = localtime(&raw_time); // Convert to local time

    strftime(date, 100, "%A %B %d %Y", current_time);
}

void clean_screen(){
    // Clear the console screen
    #ifdef _WIN32
        system("cls"); // For Windows
    #else
        system("clear"); // For Linux and MacOS
    #endif
}


int input_format(){
    int format;
    printf("Choose the time format:\n");
    printf("1. 12-hour format\n");
    printf("2. 24-hour format(default)\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &format);


    return format;
}