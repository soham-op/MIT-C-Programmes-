#include <stdio.h>

int main() {
    int a, b, choice, ans;

    printf("Enter any 2 numbers: ");
    scanf("%d %d", &a, &b);

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            ans = a + b;
            printf("Addition is = %d\n", ans);
            break;
        case 2:
            ans = a - b;
            printf("Subtraction is = %d\n", ans);
            break;
        case 3:
            ans = a * b;
            printf("Multiplication is = %d\n", ans);
            break;
        case 4:
            ans = a / b;
            printf("Division is = %d\n", ans);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}