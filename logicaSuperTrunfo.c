#include <stdio.h>

typedef struct {
    char nomePais[50];
    int populacao;
    double area;
    double pib;
    int pontosTuristicos;
    double densidadeDemografica;
} Carta;

int main() {
    Carta carta1, carta2;

    printf("=== Cadastro das Cartas ===\n");

    // Cadastro da primeira carta
    printf("\nDigite o nome do primeiro país: ");
    scanf(" %[^\n]", carta1.nomePais);  // permite espaços no nome

    printf("Digite a população: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a área (km²): ");
    scanf("%lf", &carta1.area);

    printf("Digite o PIB (em trilhões): ");
    scanf("%lf", &carta1.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    carta1.densidadeDemografica = (double)carta1.populacao / carta1.area;

    // Cadastro da segunda carta
    printf("\nDigite o nome do segundo país: ");
    scanf(" %[^\n]", carta2.nomePais);  // permite espaços no nome

    printf("Digite a população: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a área (km²): ");
    scanf("%lf", &carta2.area);

    printf("Digite o PIB (em trilhões): ");
    scanf("%lf", &carta2.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    carta2.densidadeDemografica = (double)carta2.populacao / carta2.area;

    // Exibição dos dados cadastrados
    printf("\n=== Cartas Cadastradas ===\n");
    printf("País: %s | População: %d | Área: %.2f | PIB: %.2f | Pontos Turísticos: %d | Densidade: %.2f\n",
           carta1.nomePais, carta1.populacao, carta1.area, carta1.pib, carta1.pontosTuristicos, carta1.densidadeDemografica);

    printf("País: %s | População: %d | Área: %.2f | PIB: %.2f | Pontos Turísticos: %d | Densidade: %.2f\n",
           carta2.nomePais, carta2.populacao, carta2.area, carta2.pib, carta2.pontosTuristicos, carta2.densidadeDemografica);

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
        printf("%s: %d\n", carta1.nomePais, carta1.populacao);
        printf("%s: %d\n", carta2.nomePais, carta2.populacao);

        if (carta1.populacao == carta2.populacao) {
            printf("Resultado: Empate!\n");
        } else if (carta1.populacao > carta2.populacao) {
            printf("Vencedor: %s\n", carta1.nomePais);
        } else {
            printf("Vencedor: %s\n", carta2.nomePais);
        }
    } else if (opcao == 2) {
        printf("\nComparando Área\n");
        printf("%s: %.2f\n", carta1.nomePais, carta1.area);
        printf("%s: %.2f\n", carta2.nomePais, carta2.area);

        if (carta1.area == carta2.area) {
            printf("Resultado: Empate!\n");
        } else if (carta1.area > carta2.area) {
            printf("Vencedor: %s\n", carta1.nomePais);
        } else {
            printf("Vencedor: %s\n", carta2.nomePais);
        }
    } else if (opcao == 3) {
        printf("\nComparando PIB\n");
        printf("%s: %.2f\n", carta1.nomePais, carta1.pib);
        printf("%s: %.2f\n", carta2.nomePais, carta2.pib);

        if (carta1.pib == carta2.pib) {
            printf("Resultado: Empate!\n");
        } else if (carta1.pib > carta2.pib) {
            printf("Vencedor: %s\n", carta1.nomePais);
        } else {
            printf("Vencedor: %s\n", carta2.nomePais);
        }
    } else if (opcao == 4) {
        printf("\nComparando Pontos Turísticos\n");
        printf("%s: %d\n", carta1.nomePais, carta1.pontosTuristicos);
        printf("%s: %d\n", carta2.nomePais, carta2.pontosTuristicos);

        if (carta1.pontosTuristicos == carta2.pontosTuristicos) {
            printf("Resultado: Empate!\n");
        } else if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
            printf("Vencedor: %s\n", carta1.nomePais);
        } else {
            printf("Vencedor: %s\n", carta2.nomePais);
        }
    } else if (opcao == 5) {
        printf("\nComparando Densidade Demográfica\n");
        printf("%s: %.2f\n", carta1.nomePais, carta1.densidadeDemografica);
        printf("%s: %.2f\n", carta2.nomePais, carta2.densidadeDemografica);

        if (carta1.densidadeDemografica == carta2.densidadeDemografica) {
            printf("Resultado: Empate!\n");
        } else if (carta1.densidadeDemografica < carta2.densidadeDemografica) {
            printf("Vencedor: %s\n", carta1.nomePais);
        } else {
            printf("Vencedor: %s\n", carta2.nomePais);
        }
    } else {
        printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}