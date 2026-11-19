#include <stdio.h>

int fact_without_rec(int n) {
    int i, f = 1;
    for (i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

int fact_with_rec(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact_with_rec(n - 1);
    }
}

int main() {
    int num, ans1, ans2;

    printf("Enter a number: ");
    scanf("%d", &num);

    ans1 = fact_without_rec(num);
    ans2 = fact_with_rec(num);

    printf("Factorial without recursion = %d\n", ans1);
    printf("Factorial with recursion = %d\n", ans2);

    return 0;
}