#include <stdio.h>
#include <math.h>

int main() {
    double P, T, R, A;

    printf("Enter Principal: ");
    scanf("%lf", &P);

    printf("Enter Rate: ");
    scanf("%lf", &R);

    printf("Enter Time: ");
    scanf("%lf", &T);

    A = P * pow((1 + R / 100), T);

    printf("Final amount %.2lf", A);

    return 0;
}
