#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float p, q;
    float x1, x2;

    printf("Enter the coefficients (a, b, c) of the quadratic equation: ");
    scanf("%f %f %f", &a, &b, &c);

    p = -b / (2 * a);
    q = sqrt(b * b - 4 * a * c) / (2 * a);

    x1 = p + q;
    x2 = p - q;

    printf("The solutions to the quadratic equation are:\n");
    printf("x1 = %.2f\n", x1);
    printf("x2 = %.2f\n", x2);

    return 0;
}

