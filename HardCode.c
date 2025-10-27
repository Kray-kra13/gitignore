#include <stdio.h>
#include <string.h>

int main() {
    // Hard-coded username and password
    char username[] = "admin";
    char password[] = "12345";

    char inputUser[50], inputPass[50];

    printf("Enter username: ");
    scanf("%s", inputUser);

    printf("Enter password: ");
    scanf("%s", inputPass);

    // Check if both match the hard-coded values
    if (strcmp(inputUser, username) == 0 && strcmp(inputPass, password) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Invalid username or password.\n");
    }

    return 0;
}