#include <stdio.h> // Inclui a biblioteca padão de entrada e saída.

int main(void) {
    //=====================================
    // Declaração das variáveis da Carta 1
    //=====================================
    char estado1;         // Estado da cidade (uma letra de A a H).
    char codigo1[4];       // Código da carta (ex: A01). 3 caracteres + '\0' para terminar a string.
    char cidade1[50];      // Nome da Cidade  (máximo 49 caracteres + '/0').
    int populacao1;       // População da cidade (número inteiro).
    float area1, pib1;    // Área da cidade em km² e PIB da cidade.
    int pontosTuristicos1;// Número de pontos turístico da cidade.

    //======================================
    //Declaração das variáveis das Cartas 2
    //======================================
    char estado2;         // Estado da cidade (uma letra de A a H).
    char codigo2[4];      // Código da carta (ex: A01).3 caracteres + '\0' para terminar a string.
    char cidade2[50];     // Nome da Cidade  (máximo 49 caracteres + '/0').
    int populacao2;       // População da cidade (número inteiro).
    float area2, pib2;    // Área da cidade em km² e PIB da cidade.
    int pontosTuristicos2;// Número de pontos turístico da cidade.

    //=====================================
    // Entrada de dados da Carta 1
    //=====================================
    printf("\n=== Cadastro da Carta 1 ===\n");    // Mensagem para  informar o usuário.

    printf("Digite um estado [A - H]: ");     // Solicita o estado.
    scanf(" %c", &estado1);                     // Lê um caractere. O espaço antes de %c ignora o enter anterior

    printf("Digite o código da carta [ex: A01]: ");    // Solicitar o código da carta.
    scanf("%s", codigo1);                               // Lê uma string (array de char).

    printf("Digite o nome da cidade: ");               // Solicitar o nome da cidade.
    scanf(" %[^\n]", cidade1);                               // Lê uma string.

    printf("Digite a população da cidade: ");          // Solicitar população.
    scanf("%d", &populacao1);                            // Lê número inteiro.

    printf("Digite a área da cidade [em km²]: ");      // Solicitar área.
    scanf("%f", &area1);                                 // Lê número decimal

    printf("Digite o PIB da cidade: ");                // Solicitar PIB.
    scanf("%f", &pib1);                                  // Lê número decimal

    printf("Digite o números de pontos turísticos: "); // Solicitar pontos turísticos.
    scanf("%d", &pontosTuristicos1);                     // Lê número inteiro.

    printf("\n");  // Linha em branco para separar da próxima carta.

    //=====================================
    // Entrada de dados da Carta 2
    //=====================================
    printf("\n=== Cadastro da Carta 2 ===\n");    // Mensagem para  informar o usuário.

    printf("Digite um estado [A - H]: ");     // Solicita o estado.
    scanf(" %c", &estado2);                     // Lê um caractere. O espaço antes de %c ignora o enter anterior

    printf("Digite o código da carta [ex: A01]: ");    // Solicitar o código da carta.
    scanf("%s", codigo2);                               // Lê uma string (array de char).

    printf("Digite o nome da cidade: ");               // Solicitar o nome da cidade.
    scanf(" %[^\n]", cidade2);                               // Lê uma string.

    printf("Digite a população da cidade: ");          // Solicitar população.
    scanf("%d", &populacao2);                            // Lê número inteiro.

    printf("Digite a área da cidade [em km²]: ");      // Solicitar área.
    scanf("%f", &area2);                                 // Lê número decimal

    printf("Digite o PIB da cidade: ");                // Solicitar PIB.
    scanf("%f", &pib2);                                  // Lê número decimal

    printf("Digite o números de pontos turísticos: "); // Solicitar pontos turísticos.
    scanf("%d", &pontosTuristicos2);                     // Lê número inteiro.

    //=======================================
    // Exibição das informações das Castas 1
    //=======================================
    printf("\n=== Carta 1 ===\n");                  // Cabeçalho da carta.
    printf("Estado: %c\n", estado1);                // Exibir estado.
    printf("Código: %s\n", codigo1);                // Exibir código da carta.
    printf("Nome da cidade: %s\n", cidade1);        // Exibir nome da cidade.
    printf("População: %d\n", populacao1);          // Exibir população.
    printf("Área: %.2f km²\n", area1);              // Exibir área.
    printf("PIB: %.2f bilhões de reais\n", pib1);   // Exibir PIB.
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);    // Exibir pontos turísticos.

    //=======================================
    // Exibição das informações das Castas 2
    //=======================================
    printf("\n=== Carta 2 ===\n");                  // Cabeçalho da carta.
    printf("Estado: %c\n", estado2);                // Exibir estado.
    printf("Código: %s\n", codigo2);                // Exibir código da carta.
    printf("Nome da cidade: %s\n", cidade2);        // Exibir nome da cidade.
    printf("População: %d\n", populacao2);          // Exibir população.
    printf("Área: %.2f km²\n", area2);              // Exibir área.
    printf("PIB: %.2f bilhões de reais\n", pib2);   // Exibir PIB.
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);    // Exibir pontos turísticos.

    return 0;   // Finalizar o programa.
}
