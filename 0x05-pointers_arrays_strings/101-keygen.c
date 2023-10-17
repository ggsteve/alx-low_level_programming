#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Function to generate a random password
void generatePassword(char *password, int length) {
    // Define the characters allowed in the password
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    // Seed the random number generator
    srand((unsigned int)time(NULL));

    // Generate the password
    for (int i = 0; i < length; ++i) {
        int index = rand() % (int)(sizeof(charset) - 1);
        password[i] = charset[index];
    }

    // Null-terminate the password
    password[length] = '\0';
}

int main() {
    // Assuming the maximum password length is 10 characters
    const int passwordLength = 10;
    char password[passwordLength + 1];

    // Generate a random password
    generatePassword(password, passwordLength);

    // Print the generated password
    printf("Generated Password: %s\n", password);

    return 0;
}
