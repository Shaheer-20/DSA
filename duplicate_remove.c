#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to remove duplicates from a string
void removeDuplicates(char str[]) {

    bool seen[256] = {false};  // Array to track seen characters
    int index = 0;             // Index for the modified string

    for (int i = 0; str[i] != '\0'; i++) {
        if (!seen[(unsigned char)str[i]]) {
            // If the character is not already seen, add it to the result
            seen[(unsigned char)str[i]] = true;
            str[index++] = str[i];
        }
    }

    str[index] = '\0';  // Null-terminate the modified string
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);
    
    if(strlen(str)==1){
        printf("Give atleast 2 characters");
        return 0;
    }

    removeDuplicates(str);

    printf("String after removing duplicates: %s\n", str);

    return 0;
}
