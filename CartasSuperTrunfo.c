#include <stdio.h>
#include <string.h>

// Estrutura da carta
struct Carta {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
};

// Função para exibir menu de atributos
void exibirMenu(int excluido) {
    printf("\nEscolha um atributo:\n");
    if (excluido != 1) printf("1. População\n");
    if (excluido != 2) printf("2. Área\n");
    if (excluido != 3) printf("3. PIB\n");
    if (excluido != 4) printf("4. Pontos Turísticos\n");
    if (excluido != 5) printf("5. Densidade Demográfica\n");
    printf("Escolha uma opção: ");
}

// Função para comparar dois atributos
float obterValorAtributo(struct Carta c, int atributo) {
    switch (atributo) {
        case 1: return (float)c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return (float)c.pontos_turisticos;
        case 5: return c.densidade_demografica;
        default: return -1;
    }
}

int main() {
    // Cartas cadastradas
    struct Carta carta1 = {"Brasil", 211000000, 8515767.0, 2200000000000.0, 100, 24.77};
    struct Carta carta2 = {"Argentina", 44938712, 2780400.0, 500000000000.0, 80, 16.16};

    int atributo1, atributo2;
    float valor1_a1, valor1_a2, valor2_a1, valor2_a2, soma1, soma2;

    printf("\nBem-vindo ao Super Trunfo dos Países!\n");

    // Escolha do primeiro atributo
    exibirMenu(0);
    scanf("%d", &atributo1);
    while (atributo1 < 1 || atributo1 > 5) {
        printf("Opção inválida. Tente novamente.\n");
        exibirMenu(0);
        scanf("%d", &atributo1);
    }

    // Escolha do segundo atributo (dinâmico)
    exibirMenu(atributo1);
    scanf("%d", &atributo2);
    while (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1) {
        printf("Opção inválida. Tente novamente.\n");
        exibirMenu(atributo1);
        scanf("%d", &atributo2);
    }

    // Obtendo valores
    valor1_a1 = obterValorAtributo(carta1, atributo1);
    valor1_a2 = obterValorAtributo(carta1, atributo2);
    valor2_a1 = obterValorAtributo(carta2, atributo1);
    valor2_a2 = obterValorAtributo(carta2, atributo2);

    // Exibir atributos e valores
    printf("\nComparando %s vs %s:\n", carta1.nome, carta2.nome);

    char *nomesAtributos[] = {"", "População", "Área", "PIB", "Pontos Turísticos", "Densidade Demográfica"};

    printf("%s: %.2f x %.2f\n", nomesAtributos[atributo1], valor1_a1, valor2_a1);
    printf("%s: %.2f x %.2f\n", nomesAtributos[atributo2], valor1_a2, valor2_a2);

    // Comparação individual
    int v1 = 0, v2 = 0;

    if (atributo1 == 5) {
        valor1_a1 < valor2_a1 ? v1++ : (valor2_a1 < valor1_a1 ? v2++ : 0);
    } else {
        valor1_a1 > valor2_a1 ? v1++ : (valor2_a1 > valor1_a1 ? v2++ : 0);
    }

    if (atributo2 == 5) {
        valor1_a2 < valor2_a2 ? v1++ : (valor2_a2 < valor1_a2 ? v2++ : 0);
    } else {
        valor1_a2 > valor2_a2 ? v1++ : (valor2_a2 > valor1_a2 ? v2++ : 0);
    }

    // Soma total
    soma1 = valor1_a1 + valor1_a2;
    soma2 = valor2_a1 + valor2_a2;

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", carta1.nome, soma1);
    printf("%s: %.2f\n", carta2.nome, soma2);

    // Resultado final
    if (soma1 > soma2) {
        printf("\n%s venceu a rodada!\n", carta1.nome);
    } else if (soma2 > soma1) {
        printf("\n%s venceu a rodada!\n", carta2.nome);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}

