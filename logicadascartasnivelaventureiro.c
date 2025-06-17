#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta do Super Trunfo
typedef struct {
    char pais[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica;
} Carta;

// Função para exibir os detalhes de uma carta
void exibirCarta(Carta c) {
    printf("\nPaís: %s", c.pais);
    printf("\nPopulação: %d", c.populacao);
    printf("\nÁrea: %.2f km²", c.area);
    printf("\nPIB: %.2f bilhões", c.pib);
    printf("\nPontos Turísticos: %d", c.pontosTuristicos);
    printf("\nDensidade Demográfica: %.2f hab/km²\n", c.densidadeDemografica);
}

// Função para comparar dois valores inteiros
void compararInt(int valor1, int valor2, char nomeA[], char nomeB[], char atributo[]) {
    printf("\nComparação por %s:\n", atributo);
    printf("%s: %d\n", nomeA, valor1);
    printf("%s: %d\n", nomeB, valor2);

    if (valor1 > valor2) {
        printf("\nResultado: %s venceu!\n", nomeA);
    } else if (valor2 > valor1) {
        printf("\nResultado: %s venceu!\n", nomeB);
    } else {
        printf("\nResultado: Empate!\n");
    }
}

// Função para comparar dois valores float
void compararFloat(float valor1, float valor2, char nomeA[], char nomeB[], char atributo[], int menorVence) {
    printf("\nComparação por %s:\n", atributo);
    printf("%s: %.2f\n", nomeA, valor1);
    printf("%s: %.2f\n", nomeB, valor2);

    if (valor1 == valor2) {
        printf("\nResultado: Empate!\n");
    } else if ((valor1 > valor2 && !menorVence) || (valor1 < valor2 && menorVence)) {
        printf("\nResultado: %s venceu!\n", nomeA);
    } else {
        printf("\nResultado: %s venceu!\n", nomeB);
    }
}

int main() {
    // Cadastro de duas cartas (exemplo)
    Carta carta1 = {"Brasil", 211000000, 8515767, 2200, 20, 211000000.0 / 8515767.0};
    Carta carta2 = {"Argentina", 44938712, 2780400, 519, 15, 44938712.0 / 2780400.0};

    int opcao;

    // Exibir as cartas
    printf("=== Cartas do Super Trunfo ===\n");
    printf("\nCarta 1:");
    exibirCarta(carta1);

    printf("\nCarta 2:");
    exibirCarta(carta2);

    // Exibir o menu de atributos
    printf("\n=== Menu de Comparação ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("\nDigite a opção: ");
    scanf("%d", &opcao);

    // Lógica de comparação com switch
    switch (opcao) {
        case 1:
            compararInt(carta1.populacao, carta2.populacao, carta1.pais, carta2.pais, "População");
            break;
        case 2:
            compararFloat(carta1.area, carta2.area, carta1.pais, carta2.pais, "Área", 0);
            break;
        case 3:
            compararFloat(carta1.pib, carta2.pib, carta1.pais, carta2.pais, "PIB", 0);
            break;
        case 4:
            compararInt(carta1.pontosTuristicos, carta2.pontosTuristicos, carta1.pais, carta2.pais, "Pontos Turísticos");
            break;
        case 5:
            compararFloat(carta1.densidadeDemografica, carta2.densidadeDemografica, carta1.pais, carta2.pais, "Densidade Demográfica", 1);
            break;
        default:
            printf("\nOpção inválida! Por favor, execute o programa novamente e escolha uma opção válida.\n");
            break;
    }

    return 0;
}
