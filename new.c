#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char str[]) {
    int left = 0, right = strlen(str) - 1;  // Pointers to start and end of the string
    
    while (left < right) {
        if (str[left] != str[right]) {
            return false;  // If characters don't match, it's not a palindrome
        }
        left++;  // Move left pointer forward
        right--; // Move right pointer backward
    }
    
    return true;  // If all characters matched, it's a palindrome
}

int main() {
    char str[100]; // Input string
    printf("Enter a string: ");
    scanf("%s", str);
    
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    
    return 0;
}
