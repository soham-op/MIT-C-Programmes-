#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    int choice, len, cmp;

    printf("1. String Length\n");
    printf("2. String Copy\n");
    printf("3. String Concatenation\n");
    printf("4. String Compare\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a string: ");
            scanf("%s", str1);
            len = strlen(str1);
            printf("Length of string = %d\n", len);
            break;

        case 2:
            printf("Enter a string: ");
            scanf("%s", str1);
            strcpy(str2, str1);
            printf("Copied string = %s\n", str2);
            break;

        case 3:
            printf("Enter first string: ");
            scanf("%s", str1);
            printf("Enter second string: ");
            scanf("%s", str2);
            strcat(str1, str2);
            printf("Concatenated string = %s\n", str1);
            break;

        case 4:
            printf("Enter first string: ");
            scanf("%s", str1);
            printf("Enter second string: ");
            scanf("%s", str2);
            cmp = strcmp(str1, str2);
            if (cmp == 0) {
                printf("Strings are equal\n");
            } else {
                printf("Strings are not equal\n");
            }
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}