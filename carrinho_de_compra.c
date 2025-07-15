#include <stdio.h>

int main(){

    char item[50] = "";
    float preco = 0.0f;
    int qtd = 0;
    char moeda = '$';

    printf("O que você gostaria de comprar?");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';
    
    printf("Qual o preço de cada?");
    scanf("%f", &preco);

    printf("Quantos você gostaria?");
    scanf("%d", &qtd);
    
    printf("Você comprou %d unidades de %s.\n", qtd, item);       
    printf("Total: %c%.2f", moeda, preco * qtd);

    return 0;
}