#include <stdio.h>

int count_valid_sequences(int n) {
    if (n == 0) return 1;
    if (n == 1) return 2;
    if (n == 2) return 4;
  
    int dp[n+1];
    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 4;

    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % 12345;
    }
    return dp[n];
}

int main() {
    int n;
    printf("Enter the length of the sequences n (1 < n < 10000): ");
    scanf("%d", &n);

    if (n <= 1 || n >= 10000) {
        printf("The length of the sequences n should be in the range from 2 to 9999 inclusive.\n");
        return 1;
    }

    int result = count_valid_sequences(n);
    printf("The number of valid sequences of length %d: %d\n", n, result);
    return 0;
}
