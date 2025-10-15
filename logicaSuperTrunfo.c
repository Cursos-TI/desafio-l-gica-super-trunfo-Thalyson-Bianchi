#include <stdio.h>
#include <string.h>

// DADOS DOS PAISES

struct Carta {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica; // populacao / area
};

int main() {
    // Cartas pré-cadastradas

    struct Carta pais1 = {"Brasil", 214000000, 8515767.0, 2.18, 15, 0};
    struct Carta pais2 = {"Japão", 125000000, 377975.0, 4.07, 20, 0};

    // Cálculo da densidade demográfica

    pais1.densidade_demografica = pais1.populacao / pais1.area;
    pais2.densidade_demografica = pais2.populacao / pais2.area;

    int opcao;

    printf("=== SUPER TRUNFO - PAISES ===\n");
    printf("Carta 1: %s\n", pais1.nome);
    printf("Carta 2: %s\n", pais2.nome);

    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("\n~ Resultado da Comparação ~\n");

    switch (opcao) {
        case 1: // População

            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", pais1.nome, pais1.populacao);
            printf("%s: %d habitantes\n", pais2.nome, pais2.populacao);

            if (pais1.populacao > pais2.populacao)
                printf("Vencedor: %s\n", pais1.nome);
            else if (pais1.populacao < pais2.populacao)
                printf("Vencedor: %s\n", pais2.nome);
            else
                printf("Empate!\n");
            break;

        case 2: // Área

            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", pais1.nome, pais1.area);
            printf("%s: %.2f km²\n", pais2.nome, pais2.area);

            if (pais1.area > pais2.area)
                printf("Vencedor: %s\n", pais1.nome);
            else if (pais1.area < pais2.area)
                printf("Vencedor: %s\n", pais2.nome);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB

            printf("Atributo: PIB\n");
            printf("%s: %.2f trilhões de USD\n", pais1.nome, pais1.pib);
            printf("%s: %.2f trilhões de USD\n", pais2.nome, pais2.pib);

            if (pais1.pib > pais2.pib)
                printf("Vencedor: %s\n", pais1.nome);
            else if (pais1.pib < pais2.pib)
                printf("Vencedor: %s\n", pais2.nome);
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos turísticos

            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", pais1.nome, pais1.pontos_turisticos);
            printf("%s: %d\n", pais2.nome, pais2.pontos_turisticos);

            if (pais1.pontos_turisticos > pais2.pontos_turisticos)
                printf("Vencedor: %s\n", pais1.nome);
            else if (pais1.pontos_turisticos < pais2.pontos_turisticos)
                printf("Vencedor: %s\n", pais2.nome);
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade demográfica (regra invertida)

            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.6f hab/km²\n", pais1.nome, pais1.densidade_demografica);
            printf("%s: %.6f hab/km²\n", pais2.nome, pais2.densidade_demografica);

            // Regra invertida: vence o menor

            if (pais1.densidade_demografica < pais2.densidade_demografica)
                printf("Vencedor: %s (menor densidade)\n", pais1.nome);
            else if (pais1.densidade_demografica > pais2.densidade_demografica)
                printf("Vencedor: %s (menor densidade)\n", pais2.nome);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    printf("Fim da rodada!\n");

    return 0;
}