#include <stdio.h>

int main(){

    int idade = 19;
    float preco = 29.90;
    double pi = 3.1415926535;
    char moeda = '$';
    char nome[] = "Icaro";
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    int num4 = 1;
    int num5 = -10;
    float preco1 = 20.90;
    float preco2 = 1.50;
    float preco3 = -100.00;
    
    printf("%d\n", idade);
    printf("%f\n", preco);
    printf("%lf\n", pi);
    printf("%c\n", moeda);
    printf("%s\n", nome);
    
    // Largura, Precisão e Flags
    
    printf("%4d\n", num1);
    printf("%-4d\n", num2);
    printf("%04d\n", num3);
    printf("%+d\n", num4);
    printf("%+d\n", num5);
    printf("%.2f\n", preco1);
    printf("%+7.2f\n", preco2);
    printf("%08.2f\n", preco3);

}