#include <stdio.h>

#define INTERVALO 0.000000001
#define E &&
#define OU ||
#define DIFERENÇA(x, y) x-y

int main () {
    double a, b;
    a = 0.1;
    b = 0.2;
    double soma = a + b;
    printf("%d\n", (DIFERENÇA(soma, 0.3) < INTERVALO OU DIFERENÇA(0.3, soma) > INTERVALO));
    return 0;
}