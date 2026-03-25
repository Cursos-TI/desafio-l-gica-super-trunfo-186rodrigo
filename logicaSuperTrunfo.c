#include <stdio.h>

int main() {
    char nomePais1[50], nomePais2[50];
    int populacao1, populacao2;
    double area1, area2;
    double pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    double densidadeDemografica1, densidadeDemografica2;
    
    printf("=== Cadastro das Cartas ===\n");

    // Cadastro da primeira carta
    printf("\nDigite o nome do primeiro país: ");
    scanf(" %[^\n]", nomePais1);  // permite espaços no nome

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
    scanf(" %[^\n]", nomePais2);  // permite espaços no nome

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
    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");

    int opcao;
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("\nComparando População\n");
        printf("%s: %d\n", nomePais1, populacao1);
        printf("%s: %d\n", nomePais2, populacao2);

        if (populacao1 == populacao2) {
            printf("Resultado: Empate!\n");
        } else if (populacao1 > populacao2) {
            printf("Vencedor: %s\n", nomePais1);
        } else {
            printf("Vencedor: %s\n", nomePais2);
        }
    } else if (opcao == 2) {
        printf("\nComparando Área\n");
        printf("%s: %.2f\n", nomePais1, area1);
        printf("%s: %.2f\n", nomePais2, area2);

        if (area1 == area2) {
            printf("Resultado: Empate!\n");
        } else if (area1 > area2) {
            printf("Vencedor: %s\n", nomePais1);
        } else {
            printf("Vencedor: %s\n", nomePais2);
        }
    } else if (opcao == 3) {
        printf("\nComparando PIB\n");
        printf("%s: %.2f\n", nomePais1, pib1);
        printf("%s: %.2f\n", nomePais2, pib2);

        if (pib1 == pib2) {
            printf("Resultado: Empate!\n");
        } else if (pib1 > pib2) {
            printf("Vencedor: %s\n", nomePais1);
        } else {
            printf("Vencedor: %s\n", nomePais2);
        }
    } else if (opcao == 4) {
        printf("\nComparando Pontos Turísticos\n");
        printf("%s: %d\n", nomePais1, pontosTuristicos1);
        printf("%s: %d\n", nomePais2, pontosTuristicos2);

        if (pontosTuristicos1 == pontosTuristicos2) {
            printf("Resultado: Empate!\n");
        } else if (pontosTuristicos1 > pontosTuristicos2) {
            printf("Vencedor: %s\n", nomePais1);
        } else {
            printf("Vencedor: %s\n", nomePais2);
        }
    } else if (opcao == 5) {
        printf("\nComparando Densidade Demográfica\n");
        printf("%s: %.2f\n", nomePais1, densidadeDemografica1);
        printf("%s: %.2f\n", nomePais2, densidadeDemografica2);

        if (densidadeDemografica1 == densidadeDemografica2) {
            printf("Resultado: Empate!\n");
        } else if (densidadeDemografica1 < densidadeDemografica2) {
            printf("Vencedor: %s\n", nomePais1);
        } else {
            printf("Vencedor: %s\n", nomePais2);
        }
    } else {
        printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}