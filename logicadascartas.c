#include <stdio.h>
#include <string.h>

// Estrutura para armazenar as informações da carta
struct Carta {
    char estado[3];
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

// Função para cadastrar os dados de uma carta
void cadastrarCarta(struct Carta *carta) {
    printf("\nCadastro da Carta:\n");

    printf("Estado (sigla): ");
    scanf("%s", carta->estado);

    printf("Codigo da carta: ");
    scanf("%s", carta->codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta->nomeCidade);  // Lê string com espaço

    printf("Populacao: ");
    scanf("%d", &carta->populacao);

    printf("Area (em km²): ");
    scanf("%f", &carta->area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta->pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta->pontosTuristicos);

    // Cálculo da densidade populacional
    carta->densidadePopulacional = carta->populacao / carta->area;

    // Cálculo do PIB per capita
    carta->pibPerCapita = carta->pib / carta->populacao;
}

// Função para exibir os dados de uma carta
void exibirCarta(struct Carta carta) {
    printf("\n--- Dados da Carta ---\n");
    printf("Estado: %s\n", carta.estado);
    printf("Codigo: %s\n", carta.codigo);
    printf("Cidade: %s\n", carta.nomeCidade);
    printf("Populacao: %d\n", carta.populacao);
    printf("Area: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões\n", carta.pib);
    printf("Pontos Turisticos: %d\n", carta.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta.densidadePopulacional);
    printf("PIB per capita: %.6f bilhões por habitante\n", carta.pibPerCapita);
}

int main() {
    struct Carta carta1, carta2;

    // Cadastro das duas cartas
    printf("=== Cadastro da Carta 1 ===");
    cadastrarCarta(&carta1);

    printf("\n=== Cadastro da Carta 2 ===");
    cadastrarCarta(&carta2);

    // Exibição das cartas
    printf("\n=== Carta 1 ===");
    exibirCarta(carta1);

    printf("\n=== Carta 2 ===");
    exibirCarta(carta2);

    // Escolha fixa do atributo para comparação: Exemplo: População
    printf("\n=== Comparacao de Cartas (Atributo: Populacao) ===\n");

    printf("\nCarta 1 - %s (%s): %d habitantes", carta1.nomeCidade, carta1.estado, carta1.populacao);
    printf("\nCarta 2 - %s (%s): %d habitantes\n", carta2.nomeCidade, carta2.estado, carta2.populacao);

    // Comparação usando estruturas if e if-else
    if (carta1.populacao > carta2.populacao) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } else {
        printf("\nResultado: Empate! As duas cartas possuem a mesma populacao.\n");
    }

    return 0;
}
