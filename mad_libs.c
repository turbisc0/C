#include <stdio.h>
#include <string.h>

int main(){

    /* Mad Libs é um jogo de palavras criado por Leonard 
    Stern e Roger Price. Consiste em um jogador solicitar 
    aos outros uma lista de palavras para substituir os 
    espaços em branco em uma história antes de ler em 
    voz alta. */

    char substantivo[50] = "";
    char verbo[50] = "";
    char adjetivo1[50] = "";
    char adjetivo2[50] = "";
    char adjetivo3[50] = "";

    printf("Todos estão relacionados!\n");

    printf("Escreva um substantivo (Jogo ou Esporte): ");
    fgets(substantivo, sizeof(substantivo), stdin);
    substantivo[strlen(substantivo) - 1] = '\0';

    printf("Escreva um adjetivo (Qualidade): ");
    fgets(adjetivo1, sizeof(adjetivo1), stdin);
    adjetivo1[strlen(adjetivo1) - 1] = '\0';

    printf("Escreva um adjetivo (Estado): ");
    fgets(adjetivo2, sizeof(adjetivo2), stdin);
    adjetivo2[strlen(adjetivo2) - 1] = '\0';

    printf("Escreva um verbo (Terminado em -ando, -endo, -indo): ");
    fgets(verbo, sizeof(verbo), stdin);
    verbo[strlen(verbo) - 1] = '\0';

    printf("Escreva um adjetivo (Qualidade): ");
    fgets(adjetivo3, sizeof(adjetivo3), stdin);
    adjetivo3[strlen(adjetivo3) - 1] = '\0';

    printf("\nO/A %s é muito %s.\n", substantivo, adjetivo1);
    printf("Mesmo estando %s.\n", adjetivo2);
    printf("Continuaria %s.\n", verbo);
    printf("Já que é %s demais!", adjetivo3);
    
    return 0;
}