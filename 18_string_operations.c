#include <stdio.h>
#include <string.h>

int main() {
    char s1[256];
    char s2[256];

    printf("Enter first string: ");
    if (!fgets(s1, sizeof(s1), stdin)) return 0;
    s1[strcspn(s1, "\n")] = '\0';

    printf("Enter second string: ");
    if (!fgets(s2, sizeof(s2), stdin)) return 0;
    s2[strcspn(s2, "\n")] = '\0';

    // (i) length of string
    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);
    printf("\nLength of first string: %zu\n", len1);
    printf("Length of second string: %zu\n", len2);

    // (ii) string reversal
    char rev1[256], rev2[256];
    for (size_t i = 0; i < len1; ++i) rev1[i] = s1[len1 - 1 - i];
    rev1[len1] = '\0';
    for (size_t i = 0; i < len2; ++i) rev2[i] = s2[len2 - 1 - i];
    rev2[len2] = '\0';
    printf("\nReversed first string: %s\n", rev1);
    printf("Reversed second string: %s\n", rev2);

    // (iii) equality check
    if (strcmp(s1, s2) == 0)
        printf("\nStrings are equal.\n");
    else
        printf("\nStrings are not equal.\n");

    // (iv) palindrome check
    int pal1 = (strcmp(s1, rev1) == 0);
    int pal2 = (strcmp(s2, rev2) == 0);
    printf("\nFirst string is %sa palindrome.\n", pal1 ? "" : "not ");
    printf("Second string is %sa palindrome.\n", pal2 ? "" : "not ");

    // (v) substring check
    if (strstr(s1, s2) != NULL)
        printf("\nSecond string is a substring of first string.\n");
    else
        printf("\nSecond string is NOT a substring of first string.\n");

    if (strstr(s2, s1) != NULL)
        printf("First string is a substring of second string.\n");
    else
        printf("First string is NOT a substring of second string.\n");

    return 0;
}

