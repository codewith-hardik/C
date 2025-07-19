// progress bar
// by @hardik



#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // For sleep function
#include <time.h>

const int BAR_LENGTH = 50; // Length of the progress bar
const int MAX_TASKS = 5; // Maximum number of tasks

typedef struct {
    int task_id;
    int progress;
    int step;
} Task;

void print_bar(Task task);
void clear_screen();

int main(){

    Task tasks[MAX_TASKS];
    srand(time(NULL)); // Seed for random number generation

    for (int i = 0; i < MAX_TASKS; i++)
    {
        tasks[i].task_id = i + 1;
        tasks[i].progress = 0;
        tasks[i].step = rand() % 5 + 1; // Random step between 1 and 5
    }
     
    int task_incomplete = 1;
    while (task_incomplete)
    {
        task_incomplete = 0; // Assume all tasks are complete
        clear_screen(); // Clear the console screen

        for (int i = 0; i < MAX_TASKS; i++)
        {
            tasks[i].progress += tasks[i].step;
            if (tasks[i].progress >= 100) {
                tasks[i].progress = 100;
            }else if (tasks[i].progress < 100) {
                task_incomplete = 1; // At least one task is incomplete
            }
            print_bar(tasks[i]); // Print the progress bar for each task
        }
        
        sleep(1);
    }

    printf("\nAll tasks completed!\n");
    return 0;
}

void clear_screen(){
    // Clear the console screen
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}


void print_bar(Task task) {
    int pos = (BAR_LENGTH * task.progress) / 100; // Calculate the position of the progress bar
    printf("Task %d: [", task.task_id);
    for (int i = 0; i < BAR_LENGTH; i++) {
        if (i < pos) {
            printf("="); // Filled part of the bar
        } else {
            printf(" "); // Empty part of the bar
        }
    }
    printf("] %d%%\n", task.progress); // Print the percentage
}