#include <stdio.h>

int main() {
    double a;
    scanf("%lf", &a);

    printf("%.2f\n", a <= 100 ? 0.51 * a : 0.65 * a);
    return 0;
}