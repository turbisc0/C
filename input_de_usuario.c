#include <stdio.h>
#include <string.h>

int main(){

    int idade = 0;
    float peso = 0.0f;
    char tipo_sanguineo = '\0';
    char nome[30] = "";

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite seu tipo sanguíneo: ");
    scanf(" %c", &tipo_sanguineo);

    getchar();
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strlen(nome) - 1] = '\0';

    printf("%s\n", nome);
    printf("%d\n", idade);
    printf("%f\n", peso);
    printf("%c\n", tipo_sanguineo);
    printf("%s\n", nome);   
    
    return 0;
}