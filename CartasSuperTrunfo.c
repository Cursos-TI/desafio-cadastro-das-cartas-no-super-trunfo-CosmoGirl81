#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char estadoA;
    char A01[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para a Carta 2
    char estadoB;
    char B01[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados para a Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estadoA);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", A01);

    while (getchar() != '\n'); // Limpa o buffer antes de fgets
    printf("Digite o Nome da Cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0; // Remove a quebra de linha

    printf("Digite a População: ");
    scanf("%d", &populacao1);
    
    while (getchar() != '\n'); // Limpa o buffer após scanf

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);
    
    while (getchar() != '\n'); // Limpa o buffer após scanf

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    while (getchar() != '\n'); // Limpa o buffer após scanf

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    
    while (getchar() != '\n'); // Limpa o buffer após scanf

    // Entrada de dados para a Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estadoB);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", B01);

    while (getchar() != '\n'); // Limpa o buffer antes de fgets
    printf("Digite o Nome da Cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0; // Remove a quebra de linha

    while (getchar() != '\n'); // Limpa o buffer após scanf

    printf("Digite a População: ");
    scanf("%d", &populacao2);
    
    while (getchar() != '\n'); // Limpa o buffer após scanf

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);
    
    while (getchar() != '\n'); // Limpa o buffer após scanf

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    while (getchar() != '\n'); // Limpa o buffer após scanf

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    
    while (getchar() != '\n'); // Limpa o buffer após scanf

    // Exibindo os dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estadoA);
    printf("Código: %s\n", A01);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estadoB);
    printf("Código: %s\n", B01);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
