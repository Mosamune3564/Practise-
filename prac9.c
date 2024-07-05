#include <stdio.h>
#include <limits.h>

int min_steps(int x, int y) {
    int n = y - x + 1;
    int dp[n];
  
    for (int i = 0; i < n; ++i) {
        dp[i] = INT_MAX;
    }

    dp[0] = 0;
    for (int i = 1; i < n; ++i) {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0) {
            dp[i] = (dp[i] < dp[i / 2] + 1) ? dp[i] : dp[i / 2] + 1;
        }
        if (i % 3 == 0) {
            dp[i] = (dp[i] < dp[i / 3] + 1) ? dp[i] : dp[i / 3] + 1;
        }
    }
    return dp[n - 1];
}
int main() {
    int x, y;
    printf("Enter x and y (0 <= x <= y < 2^31): ");
    scanf("%d %d", &x, &y);
    int result = min_steps(x, y);
    printf("Minimum steps from %d to %d: %d\n", x, y, result);
    return 0;
}
