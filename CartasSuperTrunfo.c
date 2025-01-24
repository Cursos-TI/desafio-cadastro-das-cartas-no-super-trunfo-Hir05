#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int codigo_da_cidade;
    char nome[50];
    int populacao;
    float area;
    int pib;
    int numero_de_pontos_turisticos;

    printf("codigo da cidade:\n");
    scanf ("%d", &codigo_da_cidade);

    printf("nome da cidade:\n");
    scanf("%s", nome);

    printf("Numero da população:\n");
    scanf("%d", &populacao);

    printf("Area:\n");
    scanf("%f", &area);

    printf("PIB da cidade:\n");
    scanf("%d", &pib);

    printf("insira o numero de pontos turisticos:");
    scanf("%d", &numero_de_pontos_turisticos);

    printf("Codigo da cidade: %d\n", codigo_da_cidade);
    printf("Nome da cidade: %s\n", nome);
    printf("População:%d\n", populacao);
    printf("Area:km %f\n", area);
    printf("PIB: %d\n", pib);
    printf("Pontos turisticos: %d\n", numero_de_pontos_turisticos);
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
