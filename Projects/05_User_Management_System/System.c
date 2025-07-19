// User Management System
// by @hardik



#include <stdio.h>
#include <string.h>
#include <unistd.h>
// #include <termios.h>
#include <conio.h> // For _getch() function

#define MAX_USERS 100
#define CREDENTIAL_LENGTH 50

typedef struct
{
    char username[CREDENTIAL_LENGTH];
    char password[CREDENTIAL_LENGTH];
} User;

User users[MAX_USERS];
int user_count = 0;

void register_user();
int login_user();
void fix_fgets_input(char *);
void input_credentials(char *username, char *password);

int main()
{
    int option;
    int user_index = -1;
    while (1)
    {
        printf("User Management System\n");
        printf("1. Register\n");
        printf("2. Login\n");
        printf("3. Exit\n");
        printf("Select an option: ");
        scanf("%d", &option);
        getchar(); // Clear the newline character from the input buffer
        switch (option)
        {
        case 1:
            register_user();
            break;
        case 2:
            user_index = login_user();
            if (user_index != -1)
            {
                printf("Login successful! Welcome, %s!\n", users[user_index].username);
            }
            else
            {
                printf("Login failed!\n");
            }
            break;
        case 3:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid option. Please try again.\n");
            break;
        }
    }

    return 0;
}

void register_user(){
    if(user_count >= MAX_USERS) {
        printf("User limit reached. Cannot register more users.\n");
        return;
    }

    int new_index = user_count;
    printf("Register a new user\n");
    input_credentials(users[new_index].username, users[new_index].password);
    user_count++;
    printf("User registered successfully!\n");
    printf("Total users: %d\n", user_count);
}

int login_user(){
    char username[CREDENTIAL_LENGTH];
    char password[CREDENTIAL_LENGTH];

    input_credentials(username, password);

    for (int i = 0; i < user_count; i++)
    {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0)
        {
            return i; // Return the index of the logged-in user
        }
    }
    return -1; // Login failed
}

void input_credentials(char *username, char *password){
    printf("\nEnter username: ");
    fgets(username, CREDENTIAL_LENGTH, stdin);
    fix_fgets_input(username);
    
    // Password with masking
    printf("Enter password: ");
    int i = 0;
    char ch;
    while (1) {
        ch = _getch(); // Get character without echoing
        
        if (ch == 13) { // Enter key
            password[i] = '\0';
            break;
        } else if (ch == 8) { // Backspace
            if (i > 0) {
                i--;
                printf("\b \b"); // Move back, erase, move back again
            }
        } else if (i < CREDENTIAL_LENGTH - 1) {
            password[i++] = ch;
            printf("*"); // Print asterisk instead of the actual character
        }
    }
    printf("\n");
}

void fix_fgets_input(char *input){
    int index = strcspn(input, "\n");
    input[index] = '\0'; // Replace newline character with null terminator
}