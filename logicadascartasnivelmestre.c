#include <stdio.h>
#include <string.h>

// Estrutura da carta
typedef struct {
    char pais[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica;
} Carta;

// Função para exibir os atributos disponíveis (ajusta o menu com base na primeira escolha)
void mostrarMenu(int atributoEscolhido) {
    printf("\nEscolha o atributo:\n");
    if (atributoEscolhido != 1) printf("1 - População\n");
    if (atributoEscolhido != 2) printf("2 - Área\n");
    if (atributoEscolhido != 3) printf("3 - PIB\n");
    if (atributoEscolhido != 4) printf("4 - Pontos Turísticos\n");
    if (atributoEscolhido != 5) printf("5 - Densidade Demográfica\n");
}

// Função para pegar valor numérico de cada atributo
float obterValor(Carta c, int atributo) {
    switch (atributo) {
        case 1: return c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return c.pontosTuristicos;
        case 5: return c.densidadeDemografica;
        default: return 0;
    }
}

// Função para nome do atributo
const char* nomeAtributo(int atributo) {
    switch (atributo) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Pontos Turísticos";
        case 5: return "Densidade Demográfica";
        default: return "Atributo Inválido";
    }
}

// Função de comparação de um atributo
int compararAtributo(float valor1, float valor2, int atributo) {
    if (valor1 == valor2) return 0;  // Empate individual nesse atributo
    if (atributo == 5) {  // Regra especial: densidade demográfica, menor vence
        return (valor1 < valor2) ? 1 : 2;
    } else {
        return (valor1 > valor2) ? 1 : 2;
    }
}

int main() {
    // Cadastro das cartas (exemplo)
    Carta carta1 = {"Brasil", 211000000, 8515767, 2200, 20, 211000000.0 / 8515767.0};
    Carta carta2 = {"Argentina", 44938712, 2780400, 519, 15, 44938712.0 / 2780400.0};

    int atributo1 = 0, atributo2 = 0;

    printf("=== Super Trunfo - Nível Mestre ===\n");

    // Escolha do primeiro atributo
    do {
        mostrarMenu(0);
        printf("Digite o número do primeiro atributo: ");
        scanf("%d", &atributo1);
        if (atributo1 < 1 || atributo1 > 5) printf("\nOpção inválida! Tente novamente.\n");
    } while (atributo1 < 1 || atributo1 > 5);

    // Escolha do segundo atributo (não pode ser o mesmo)
    do {
        mostrarMenu(atributo1);
        printf("Digite o número do segundo atributo: ");
        scanf("%d", &atributo2);
        if (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1) {
            printf("\nOpção inválida! Escolha um atributo diferente do primeiro.\n");
        }
    } while (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1);

    // Obter os valores dos atributos para cada carta
    float valor1_c1 = obterValor(carta1, atributo1);
    float valor1_c2 = obterValor(carta2, atributo1);

    float valor2_c1 = obterValor(carta1, atributo2);
    float valor2_c2 = obterValor(carta2, atributo2);

    // Mostrar os valores de comparação
    printf("\n=== Comparação ===\n");
    printf("Cartas: %s vs %s\n", carta1.pais, carta2.pais);

    printf("\n%s:\n", nomeAtributo(atributo1));
    printf("%s: %.2f\n", carta1.pais, valor1_c1);
    printf("%s: %.2f\n", carta2.pais, valor1_c2);

    printf("\n%s:\n", nomeAtributo(atributo2));
    printf("%s: %.2f\n", carta1.pais, valor2_c1);
    printf("%s: %.2f\n", carta2.pais, valor2_c2);

    // Soma total (cada atributo conta seu valor bruto, independente da regra especial na soma final)
    float soma_c1 = valor1_c1 + valor2_c1;
    float soma_c2 = valor1_c2 + valor2_c2;

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", carta1.pais, soma_c1);
    printf("%s: %.2f\n", carta2.pais, soma_c2);

    // Veredito final
    printf("\n=== Resultado Final ===\n");

    if (soma_c1 == soma_c2) {
        printf("Empate!\n");
    } else {
        printf("Vencedor: %s\n", (soma_c1 > soma_c2) ? carta1.pais : carta2.pais);
    }

    return 0;
}
