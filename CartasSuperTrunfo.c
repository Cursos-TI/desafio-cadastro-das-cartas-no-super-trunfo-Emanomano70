#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio SuperTrunfo!\n");
    printf("Novo commit\n");

    char estado_1,estado_2[50];
    char Codigo_1,Codigo_2[5];
    char Cidade_1,Cidade_2[50];
    int Populacao_1,Populacao_2;
    float Area_1,Area_2;
    float pib_1,pib_2;
    int pontosturisticos_1,pontosturisticos_2;

    printf("***Escreva os dados da Carta 1***\n");
    

    printf("Digite a letra do Estado (Entre A e H): \n");
    scanf("%s", &estado_1);

    printf("Digite o código da carta (ex:C01): \n");
    scanf("%s", &Codigo_1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Cidade_1);

    printf("Digite a população: \n");
    scanf("%d", &Populacao_1);

    printf("Digite a Área: \n");
    scanf("%f", &Area_1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos_1);

    printf("***Escreva os dados da Carta 2***\n");


    printf("Digite a letra do Estado (Entre A e H): \n");
    scanf("%s", &estado_2);

    printf("Digite o código da carta: \n");
    scanf("%s", &Codigo_2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Cidade_2);

    printf("Digite a população: \n");
    scanf("%d", &Populacao_2);

    printf("Digite a Área: \n");
    scanf("%d", &Area_2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_2);

    //Dados da primeira carta.
    printf("Novo commit\n");


    printf("\nCarta1:\n");

    printf("Estado:%c\n", estado_1);
    printf("Código:%d\n", Codigo_1);
    printf("Nome da cidade:%s\n", Cidade_1);
    printf("População:%i\n", Populacao_1);
    printf("Área:%2fkm²\n", Area_1);
    printf("Pib:%2fbilhões de reais\n", pib_1);
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
