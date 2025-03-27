#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa



int main() {
    printf("Desafio SuperTrunfo!\n");
    printf("Novo commit\n");

//Dados da Carta 1

    char estado1;
    char codigo1[20];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    //Dados da Carta 2

    char estado_2;
    char codigo_2[20];
    char cidade_2[50];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontosturisticos_2;

    //Entrada e armazenamento das informaçoes das cartas 1 e 2.


    printf("***Escreva os dados da Carta 1***\n");
    

    printf("Digite a letra do Estado (Entre A e H): \n");
    scanf("%c", &estado1);

    printf("Digite o código da carta (ex:C01): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade (sem espaço se for nome composto): \n");
    scanf("%s", cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos1);

    printf("Os dados da primeira carta foram definidos!\n");
    printf("Agora vamos para a segunda carta!\n");
 
    printf("***Escreva os dados da Carta 2***\n");


    printf("Digite a letra do estado (Entre A e H):\n");
    scanf("%s", &estado_2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo_2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade_2);

    printf("Digite a população: \n");
    scanf("%d", &populacao_2);

    printf("Digite a Área: \n");
    scanf("%f", &area_2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos_2);

    //Dados da primeira carta.
    printf("Novo commit\n");


    printf("Carta 1:\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d de habitantes\n", populacao1);
    printf("Área: %2f km²\n", area1);
    printf("Pib: %2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

    printf("Novo commit\n");

    //Dados da segunda carta.

    printf("Carta 2:\n");

    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Cidade: %s\n", cidade_2);
    printf("População: %d de habitantes\n", populacao_2);
    printf("Área: %2f km²\n", area_2);
    printf("Pib: %2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos_2);

    return 0;





    

    

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
