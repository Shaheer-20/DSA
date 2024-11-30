#include <stdio.h>
#include <string.h>
#include <limits.h>

// Function to find the first non-repeating character
int findFirstNonRepeating(char str[]) {
    int freq[256] = {0};  // Frequency array for ASCII characters

    // Count the frequency of each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find the first character with a frequency of 1
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            return i;  // Return the index of the first non-repeating character
        }
    }

    return -1;  // If no unique character is found
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    int index = findFirstNonRepeating(str);

    if (index != -1) {
        printf("The first non-repeating character is: %c\n", str[index]);
    } else {
        printf("No non-repeating characters found.\n");
    }

    return 0;
}
