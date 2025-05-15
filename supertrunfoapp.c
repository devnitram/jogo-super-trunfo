#include <stdio.h>

//ESTRUTURA DAS VARIAVEIS
struct Carta
{
    char estado;
    char codigoDaCarta[4];
    char nomeDaCidade[50];
    int habitantes;
    float areaEmKm;
    float pib;
    int pontoDeTurismo;
};

//EXIBE O RESULTADO
int exibeResultado(struct Carta carta1, struct Carta carta2)
{
    printf("\n\n--> RESULTADO CARD 1 <-- \n");
    printf("%s %c\n", "Estado:", carta1.estado);
    printf("%s %s\n", "Codigo:", carta1.codigoDaCarta);
    printf("%s %s\n", "Cidade:", carta1.nomeDaCidade);
    printf("%s %d\n", "Habitantes:", carta1.habitantes);
    printf("%s %.2f\n", "Area:", carta1.areaEmKm);
    printf("%s %.2f\n", "PIB:", carta1.pib);
    printf("%s %d\n", "Numero de Pontos Turisticos:", carta1.pontoDeTurismo);

    printf("\n--> RESULTADO CARD 2 <--\n");
    printf("%s %c\n", "Estado:", carta2.estado);
    printf("%s %s\n", "Codigo:", carta2.codigoDaCarta);
    printf("%s %s\n", "Cidade:", carta2.nomeDaCidade);
    printf("%s %d\n", "Habitantes:", carta2.habitantes);
    printf("%s %.2f\n", "Area:", carta2.areaEmKm);
    printf("%s %.2f\n", "PIB:", carta2.pib);
    printf("%s %d\n", "Numero de Pontos Turisticos:", carta2.pontoDeTurismo);

    return 0;
}

//CONTEUDO PRINCIPAL
int main()
{
    struct Carta carta1;
    struct Carta carta2;

    // PRIMEIRO CARD
    printf("--> Cadastro do Super Trunfo App (CARD 1) <--\n");

    printf("\nInforme a letra do Estado de A-H: ");
    scanf(" %c", &carta1.estado);

    printf("Diga o codigo da carta (ex: A03): ");
    scanf("%s", carta1.codigoDaCarta);

    printf("Qual o nome da cidade: ");
    scanf("%s", carta1.nomeDaCidade);

    printf("Quantidade de habitantes: ");
    scanf("%d", &carta1.habitantes);

    printf("Informe qual a area em Quilometros: ");
    scanf("%f", &carta1.areaEmKm);

    printf("Informe o PIB: ");
    scanf("%f", &carta1.pib);

    printf("Quantos pontos turisticos: ");
    scanf("%d", &carta1.pontoDeTurismo);

    // SEGUNDO CARD
    printf("\n--> Cadastro do Super Trunfo App (CARD 2) <--\n");

    printf("\nInforme a letra do Estado de A-H: ");
    scanf(" %c", &carta2.estado);

    printf("Diga o codigo da carta (ex: A03): ");
    scanf("%s", carta2.codigoDaCarta);

    printf("Qual o nome da cidade: ");
    scanf("%s", carta2.nomeDaCidade);

    printf("Quantidade de habitantes: ");
    scanf("%d", &carta2.habitantes);

    printf("Informe qual a area em Quilometros: ");
    scanf("%f", &carta2.areaEmKm);

    printf("Informe o PIB: ");
    scanf("%f", &carta2.pib);

    printf("Quantos pontos turisticos: ");
    scanf("%d", &carta2.pontoDeTurismo);

    exibeResultado(carta1, carta2);
    
    return 0;
}