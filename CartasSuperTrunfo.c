#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio SuperTrunfo!\n");
    printf("Novo commit\n");

    char estado_1,estado_2;
    char codigo_1[20],codigo_2[20];
    char cidade_1[50],cidade_2[50];
    int populacao_1,populacao_2;
    float area_1,area_2;
    float pib_1,pib_2;
    int pontosturisticos_1,pontosturisticos_2;

    printf("***Escreva os dados da Carta 1***\n");
    

    printf("Digite a letra do Estado (Entre A e H): \n");
    scanf("%s", &estado_1);

    printf("Digite o código da carta (ex:C01): \n");
    scanf("%s", codigo_1);

    printf("Digite o nome da cidade: \n");
   scanf("%s", cidade_1);

    printf("Digite a população: \n");
    scanf("%d", &populacao_1);

    printf("Digite a Área: \n");
    scanf("%f", &area_1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos_1);

    printf("***Escreva os dados da Carta 2***\n");


    printf("Digite a letra do Estado (Entre A e H): \n");
    scanf("%s", &estado_2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo_2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade_2);

    printf("Digite a população: \n");
    scanf("%d", &populacao_2);

    printf("Digite a Área: \n");
    scanf("%d", &area_2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_2);

    //Dados da primeira carta.
    printf("Novo commit\n");


    printf("\nCarta 1:\n");

    printf("Estado:%c\n", estado_1);
    printf("Código:%s\n", codigo_1);
    printf("Cidade:%s\n", cidade_1);
    printf("População:%i de habitantes\n", populacao_1);
    printf("Área:%2fkm²\n", area_1);
    printf("Pib:%2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos:%d\n", pontosturisticos_1);

    printf("Novo commit\n");




    

    

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
