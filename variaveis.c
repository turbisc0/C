#include <stdio.h>
#include <stdbool.h>

int main(){
    // Variáveis são espaços armazenados na memória

    int idade = 19;
    int ano = 2025;
    float coeficiente = 7.27;
    float preco = 59.90;
    double pi = 3.14159265358979;
    double e = 2.7182818284590;
    char letra = 'A';
    char simbolo = '?';
    char nome[] = "Vitoria";
    char comida[] = "Pizza";
    bool esta_ativo = true;
    bool nao_esta_ativo = false;

    printf("Você tem: %d anos de idade!\n", idade);
    printf("O ano é: %d!\n", ano);
    printf("Seu coeficiente de rendimento é: %f\n", coeficiente);
    printf("Você pagou: R$%f\n", preco);
    printf("O valor de pi é: %.14lf\n", pi);
    printf("O valor de e é: %.14lf\n", e);
    printf("A primeira letra do alfabeto é: %c\n", letra);
    printf("O simbolo de interrogação é: %c\n", simbolo);
    printf("Seu nome é: %s\n", nome);
    printf("Sua comida favorita é: %s\n", comida);
    printf("%d\n", esta_ativo);
    printf("%d", nao_esta_ativo);

    return 0;
}