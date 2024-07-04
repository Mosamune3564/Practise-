#include <stdio.h>

double calculate_time(double t1, double t2, double t3) {
    double combined_rate = 1.0 / t1 + 1.0 / t2 + 1.0 / t3;
    double total_time = 1.0 / combined_rate;
    return total_time;
}

int main() {
    double t1, t2, t3;
    printf("Enter three values (time each guest can eat the cake): ");
    scanf("%lf %lf %lf", &t1, &t2, &t3);
    double result = calculate_time(t1, t2, t3);
    printf("Time needed to eat the cake: %.2f hours\n", result);
    
    return 0;
}
