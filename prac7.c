#include <stdio.h>
#include <math.h>



int main() {
    int x1, y1, r1, x2, y2, r2;
    double distance;
    printf("Enter coordinates x1 y1 and radius r1 of the first circle: ");
    scanf("%d %d %d", &x1, &y1, &r1);
    printf("Enter coordinates x2 y2 and radius r2 of the second circle: ");
    scanf("%d %d %d", &x2, &y2, &r2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (distance > r1 + r2) {
        printf("Number of intersection points: 0\n");
    } else if (distance < fabs(r1 - r2)) {
        printf("Number of intersection points: 0\n");
    } else if (distance == 0 && r1 == r2) {
        printf("Number of intersection points: -1\n"); 
    } else if (distance == r1 + r2 || distance == fabs(r1 - r2)) {
        printf("Number of intersection points: 1\n");
    } else {
        printf("Number of intersection points: 2 or more\n");
    }
    return 0;
}
