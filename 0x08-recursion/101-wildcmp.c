#include "main.h"
#include <stdio.h>

/**
 * wildcmp - compares two strings
 * @s1: special character
 * @s2: special character to be checked
 *
 * Return: string value
 */
int wildcmp(char *s1, char *s2) {
    // If both strings are empty, they are considered identical.
    if (*s1 == '\0' && *s2 == '\0') {
        return 1;
    }

    // If the current characters match, or s2 contains a wildcard '*',
    // you have two options: either advance in s1 or s2.
    if (*s2 == '*' || (*s1 == *s2 && *s1 != '\0')) {
        // Try to match the current character in s1 with '*' in s2
        // or move to the next character in s1.
        return wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1);
    }

    // If the current characters don't match and there's no '*',
    // the strings cannot be considered identical.
    return 0;
}

int main() {
    char str1[] = "hello";
    char str2[] = "h*o";
    
    int result = wildcmp(str1, str2);
    
    if (result == 1) {
        printf("Strings are identical.\n");
    } else {
        printf("Strings are not identical.\n");
    }

    return 0;
}
