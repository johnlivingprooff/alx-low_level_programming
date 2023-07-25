#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Define a character set containing all valid characters for the password
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    // Create a buffer to store the generated password (plus one additional space for the null terminator)
    char password[PASSWORD_LENGTH + 1];

    // Generate random characters for the password
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        // Use the rand() function to get a random index within the character set
        int index = rand() % (sizeof(charset) - 1);

        // Store the randomly selected character in the password buffer
        password[i] = charset[index];
    }

    // Add the null terminator at the end to make it a valid C-style string
    password[PASSWORD_LENGTH] = '\0';

    // Print the generated password
    printf("Generated Password: %s\n", password);

    return 0;
}

