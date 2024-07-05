#include <stdio.h>


long long count_numbers(int r) {
    long long dp[r+1][2][3];
    for (int i = 0; i <= r; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                dp[i][j][k] = 0;
            }
        }
    }

    dp[1][0][1] = 1; 
    dp[1][1][1] = 1; 
    
    for (int i = 2; i <= r; i++) {
        
        dp[i][0][1] = dp[i-1][1][1] + dp[i-1][1][2]; 
        dp[i][0][2] = dp[i-1][0][1]; 

        dp[i][1][1] = dp[i-1][0][1] + dp[i-1][0][2]; 
        dp[i][1][2] = dp[i-1][1][1]; 
    }

    long long total_count = dp[r][0][1] + dp[r][0][2] + dp[r][1][1] + dp[r][1][2];
    return total_count;
}

int main() {
    int r;
    printf("Enter the number of digits: ");
    scanf("%d", &r);

    if (r > 30) {
        printf("The value of r should be at most 30.\n");
        return 1;
    }

    long long result = count_numbers(r);
    printf("The number of %d-digit numbers: %lld\n", r, result);

    return 0;
}
