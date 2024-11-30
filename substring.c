#include <stdio.h>
#include <string.h>

// Custom implementation of strstr
char* myStrstr(const char* haystack, const char* needle) {
    if (*needle == '\0') return (char*)haystack;  // If the needle is empty, return the haystack
    
    for (int i = 0; haystack[i] != '\0'; i++) {
        int j = 0;
        
        // Compare the substring starting at haystack[i] with needle
        while (haystack[i + j] == needle[j] && haystack[i + j] != '\0' && needle[j] != '\0') {
            j++;
        }
        
        // If we've matched the whole needle, return the pointer to the start of the match
        if (needle[j] == '\0') {
            return (char*)&haystack[i];
        }
    }
    
    return NULL;  // If no match found, return NULL
}

int main() {
    char haystack[100];
    char needle[100];

    // Input for haystack
    printf("Enter a haystack: ");
    scanf("%99s", haystack);  // Prevent buffer overflow with width specifier

    // Input for needle
    printf("Enter a needle: ");
    scanf("%99s", needle);  // Prevent buffer overflow with width specifier

    // Call the function and store the result
    char* result = myStrstr(haystack, needle);
    
    // Check if the substring was found
    if (result != NULL) {
        printf("Substring found at position: %ld\n", result - haystack);  // Print the position of the substring
    } else {
        printf("Substring not found\n");
    }
    
    return 0;
}
