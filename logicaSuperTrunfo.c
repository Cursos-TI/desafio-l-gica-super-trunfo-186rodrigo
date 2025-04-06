#include <stdio.h>

int main(){
    int carta1=1, carta2=2;
    char estado1, estado2;
    char cidade1[100], cidade2[100];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    
//  Inclusão de dados da carta1
    printf("Cadastro de cartas para Super Trunfo\n");
    printf("Carta:%d\n", carta1);
    printf("O Estado dever ser preenchido com uma letra de 'A' a 'H' (representando um dos oito estados)\nEstado: ");
    scanf("%c", &estado1);
    getchar();

    printf("Nome da Cidade: ");
    scanf("%99[^\n]", cidade1);

    printf("Informe o número de abitantes da Cidade: ");
    scanf("%d", &populacao1);
    
    printf("Informe a area da cidade em km²: ");
    scanf(" %f", &area1);

    printf("Informe o PIB (O Produto Interno Bruto da cidade em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos (A quantidade de pontos turísticos na cidade): ");
    scanf("%d", &pontosturisticos1);

//  Informações da carta1
    printf("\n");
    printf("Carta: %d\n", carta1);
    printf("Estado: %c\n", estado1);
    printf("Código: %c%02d\n", estado1, carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Números de Pontos Turísticos: %d\n", pontosturisticos1);


//  Inclusão de dados da carta2
    printf("\n");
    printf("Carta:%d\n", carta2);
    printf("O Estado dever ser preenchido com uma letra de 'A' a 'H' (representando um dos oito estados)\nEstado: ");
    scanf(" %c", &estado2);
    getchar();

    printf("Nome da Cidade: ");
    scanf("%99[^\n]", cidade2);

    printf("Informe o número de abitantes da Cidade: ");
    scanf("%d", &populacao2);
    
    printf("Informe a area da cidade em km²: ");
    scanf(" %f", &area2);

    printf("Informe o PIB (O Produto Interno Bruto da cidade em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos (A quantidade de pontos turísticos na cidade): ");
    scanf("%d", &pontosturisticos2);

//  Informações da carta2    
    printf("\n");
    printf("Carta: %d\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %c%02d\n", estado2, carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Números de Pontos Turísticos: %d\n", pontosturisticos2);

    printf("\n");
    printf("Comparação das Cartas (Atributo: População):\n");
    printf("Carta %d - %s: %d\n", carta1, cidade1, populacao1);
    printf("Carta %d - %s: %d\n", carta2, cidade2, populacao2);
    
    if (populacao1 > populacao2) {
        printf("Resultado: Carta %d (%s) venceu!\n", carta1, cidade1);
    } else {
        printf("Resultado: Carta %d (%s) venceu!\n", carta2, cidade2);
    }

return 0;

}