#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if two strings are anagrams
bool areAnagrams(char str1[], char str2[]) {
    // If lengths are different, they cannot be anagrams
    if (strlen(str1) != strlen(str2)) return false;

    int freq[256] = {0};  // Frequency array for ASCII characters

    // Count frequencies of characters in str1
    for (int i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)str1[i]]++;
    }

    // Subtract frequencies using str2
    for (int i = 0; str2[i] != '\0'; i++) {
        freq[(unsigned char)str2[i]]--;
    }

    // Check if all frequencies are zero
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) return false;
    }

    return true;
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%99s", str1);

    printf("Enter the second string: ");
    scanf("%99s", str2);

    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
