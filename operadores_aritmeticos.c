#include <stdio.h>

int main(){

    int x1 = 2;
    int y1 = 3;
    int z1 = 0;
    int x2 = 2;
    int y2 = 3;
    int z2 = 0;
    int x3 = 2;
    int y3 = 3;
    int z3 = 0;
    int x4 = 2;
    float y4 = 3;
    float z4 = 0;
    int x5 = 10;
    int y5 = 2;
    int z5 = 0;
    int x6 = 10;
    int x7 = 10;
    int x8 = 10;
    int x9 = 10;
    int x10 = 10;
    int x11 = 10;

    // Operadores Aritméticos
    z1 = x1 + y1;
    z2 = x2 - y2;
    z3 = x3 * y3;
    z4 = x4 / y4;
    z5 = x5 % y5;
    x6++;
    x7--;

    // Operadores de Atribuição

    x8 += 2;
    x9 -= 3;
    x10 *= 2;
    x11 /= 2;

    printf("%d\n", z1);
    printf("%d\n", z2);
    printf("%d\n", z3);
    printf("%f\n", z4);
    printf("%d\n", z5);
    printf("%d\n", x6);
    printf("%d\n", x7);
    printf("%d\n", x8);
    printf("%d\n", x9);
    printf("%d\n", x10);
    printf("%d\n", x11);

    return 0;
    
}