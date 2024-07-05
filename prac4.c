#include <stdio.h>

int count_equal_divisors(int n) {
    int count = 0;
    for (int m = 1; m <= n; m++) {
        if (n % m == n / m) {
            count++;
        }
    }
    return count;
}
int main() {
    int n;
    printf("Enter a natural number n (1 < n < 150): ");
    scanf("%d", &n);

    if (n <= 1 || n >= 150) {
        printf("The number n should be in the range from 2 to 149 inclusive.\n");
        return 1;
    }
    int result = count_equal_divisors(n);
    printf("The number of equal divisors of %d: %d\n", n, result);
    return 0;
}
