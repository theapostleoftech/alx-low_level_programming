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
    if (*s1 == '\0' && *s2 == '\0') {
        return 1;
    }

    if (*s2 == '*' || (*s1 == *s2 && *s1 != '\0')) {
        return wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1);
    }

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
