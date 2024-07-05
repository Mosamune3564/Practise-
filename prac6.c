#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    double dx, dy, length;

    printf("Enter the coordinates x1 y1 x2 y2: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    dx = x2 - x1;
    dy = y2 - y1;
    length = sqrt(dx * dx + dy * dy);

    printf("Length of the vector: %.6lf\n", length);
    return 0;
}
