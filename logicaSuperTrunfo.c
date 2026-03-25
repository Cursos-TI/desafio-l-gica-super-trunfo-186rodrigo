#include <stdio.h>

int main() {
    char nomePais1[50], nomePais2[50];
    int populacao1, populacao2;
    double area1, area2;
    double pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    double densidadeDemografica1, densidadeDemografica2;
    int atributo1, atributo2;

    printf("=== Cadastro das Cartas ===\n");

    // Cadastro da primeira carta
    printf("\nDigite o nome do primeiro país: ");
    scanf(" %[^\n]", nomePais1); // permite espaços no nome

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (km²): ");
    scanf("%lf", &area1);

    printf("Digite o PIB (em trilhões): ");
    scanf("%lf", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidadeDemografica1 = (double)populacao1 / area1;

    // Cadastro da segunda carta
    printf("\nDigite o nome do segundo país: ");
    scanf(" %[^\n]", nomePais2); // permite espaços no nome

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (km²): ");
    scanf("%lf", &area2);

    printf("Digite o PIB (em trilhões): ");
    scanf("%lf", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadeDemografica2 = (double)populacao2 / area2;

    // Exibição dos dados cadastrados
    printf("\n=== Cartas Cadastradas ===\n");
    printf("País: %s | População: %d | Área: %.2f | PIB: %.2f | Pontos Turísticos: %d | Densidade: %.2f\n",
           nomePais1, populacao1, area1, pib1, pontosTuristicos1, densidadeDemografica1);

    printf("País: %s | População: %d | Área: %.2f | PIB: %.2f | Pontos Turísticos: %d | Densidade: %.2f\n",
           nomePais2, populacao2, area2, pib2, pontosTuristicos2, densidadeDemografica2);

    // Parte do jogo
    printf("\n=== SUPER TRUNFO - PAÍSES ===\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");

    scanf("%d", &atributo1);

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    if (atributo1 != 1) printf("1 - População\n");
    if (atributo1 != 2) printf("2 - Área\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos Turísticos\n");
    if (atributo1 != 5) printf("5 - Densidade Demográfica\n");

    scanf("%d", &atributo2);

    if (atributo1 == atributo2 || atributo1 < 1 || atributo1 > 5 || atributo2 < 1 || atributo2 > 5) {
        printf("Opção inválida! Encerrando...\n");
        return 0;
    }

    // Obter valores manualmente
    double valor1A, valor2A, valor1B, valor2B;
    switch(atributo1) {
        case 1: valor1A = populacao1; valor2A = populacao2; break;
        case 2: valor1A = area1; valor2A = area2; break;
        case 3: valor1A = pib1; valor2A = pib2; break;
        case 4: valor1A = pontosTuristicos1; valor2A = pontosTuristicos2; break;
        case 5: valor1A = densidadeDemografica1; valor2A = densidadeDemografica2; break;
    }
    switch(atributo2) {
        case 1: valor1B = populacao1; valor2B = populacao2; break;
        case 2: valor1B = area1; valor2B = area2; break;
        case 3: valor1B = pib1; valor2B = pib2; break;
        case 4: valor1B = pontosTuristicos1; valor2B = pontosTuristicos2; break;
        case 5: valor1B = densidadeDemografica1; valor2B = densidadeDemografica2; break;
    }

    double soma1 = valor1A + valor1B;
    double soma2 = valor2A + valor2B;

    // Exibição dos resultados
    printf("\n=== Comparação ===\n");
    printf("%s -> Atributo %d: %.2f | Atributo %d: %.2f | Soma: %.2f\n",
           nomePais1, atributo1, valor1A, atributo2, valor1B, soma1);
    printf("%s -> Atributo %d: %.2f | Atributo %d: %.2f | Soma: %.2f\n",
           nomePais2, atributo1, valor2A, atributo2, valor2B, soma2);

    // Comparação individual
    printf("\nResultado dos atributos:\n");
    if (atributo1 == 5) {
        printf("Atributo %d -> %s\n", atributo1,
               (valor1A < valor2A ? nomePais1 : (valor1A > valor2A ? nomePais2 : "Empate")));
    } else {
        printf("Atributo %d -> %s\n", atributo1,
               (valor1A > valor2A ? nomePais1 : (valor1A < valor2A ? nomePais2 : "Empate")));
    }

    if (atributo2 == 5) {
        printf("Atributo %d -> %s\n", atributo2,
               (valor1B < valor2B ? nomePais1 : (valor1B > valor2B ? nomePais2 : "Empate")));
    } else {
        printf("Atributo %d -> %s\n", atributo2,
               (valor1B > valor2B ? nomePais1 : (valor1B < valor2B ? nomePais2 : "Empate")));
    }

    // Resultado final
    printf("\nResultado Final:\n");
    if (soma1 == soma2) {
        printf("Empate!\n");
    } else {
        printf("Vencedor: %s\n", (soma1 > soma2) ? nomePais1 : nomePais2);
    }

    return 0;
}