#include <stdio.h>
#include <string.h>
int main() {
    char str1[104], str2[101];

    printf("Enter a string: ");
    gets(str1);

    strncpy(str2, str1, 5);
    str2[5] = '\0';
    printf("First 5 characters copied = %s\n", str2);

    return 0;
}
