#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if str2 is a rotation of str1
bool areRotations(const char* str1, const char* str2) {
    // Check if lengths are different
    if (strlen(str1) != strlen(str2)) {
        return false;
    }

    // Concatenate str1 with itself
    char temp[200];  // Temporary buffer to hold concatenated string
    snprintf(temp, sizeof(temp), "%s%s", str1, str1);  // Equivalent to strcat(str1, str1)

    // Check if str2 is a substring of temp
    return strstr(temp, str2) != NULL;
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%99s", str1);

    printf("Enter the second string: ");
    scanf("%99s", str2);

    if (areRotations(str1, str2)) {
        printf("The strings are rotations of each other.\n");
    } else {
        printf("The strings are not rotations of each other.\n");
    }

    return 0;
}
