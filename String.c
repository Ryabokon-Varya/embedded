#include <stdio.h>

// Variant 1
int main() {
    char input[100];

    // Prompt the user for input
    printf("Please enter a string:");
    fgets(input, sizeof(input), stdin);

    // Loop through each character in the string
    for (int i = 0; input[i] != '\0'; i++) {
        int asciiCode = (unsigned char)input[i];

        // Check if the ASCII code is within the valid range
        if (asciiCode >= 32 && asciiCode <= 255) {
            // Print the corresponding character and its ASCII code
            printf("Code %d: Character '%c'\n", asciiCode, input[i]);
        }
    }

    return 0;
}
