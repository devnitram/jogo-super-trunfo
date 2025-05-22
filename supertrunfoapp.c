#include <stdio.h>
#include <windows.h>

// ESTRUTURA DAS VARIAVEIS
struct Carta
{
    char estado;
    char codigoDaCarta[4];
    char nomeDaCidade[50];
    unsigned long int habitantes;
    int pontoDeTurismo;
    float areaEmKm;
    float pib;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
};

// EXIBE O RESULTADO
int exibeResultado(struct Carta carta1, struct Carta carta2)
{
    printf("\n\n--> RESULTADO CARD 1 <-- \n");
    printf("%s %c\n", "Estado:", carta1.estado);
    printf("%s %s\n", "Codigo:", carta1.codigoDaCarta);
    printf("%s %s\n", "Cidade:", carta1.nomeDaCidade);
    printf("%s %lu\n", "Habitantes:", carta1.habitantes);
    printf("%s %.2f\n", "Area:", carta1.areaEmKm);
    printf("%s %.2f\n", "PIB:", carta1.pib);
    printf("%s %d\n", "Numero de Pontos Turisticos:", carta1.pontoDeTurismo);
    printf("%s %.1f\n", "Densidade Populacional:", carta1.densidadePopulacional);
    printf("%s %.3f\n", "PIB Per Capita:", carta1.pibPerCapita);
    printf("%s %.3f\n", "Super Poder:", carta1.superPoder);

    printf("\n--> RESULTADO CARD 2 <--\n");
    printf("%s %c\n", "Estado:", carta2.estado);
    printf("%s %s\n", "Codigo:", carta2.codigoDaCarta);
    printf("%s %s\n", "Cidade:", carta2.nomeDaCidade);
    printf("%s %lu\n", "Habitantes:", carta2.habitantes);
    printf("%s %.2f\n", "Area:", carta2.areaEmKm);
    printf("%s %.2f\n", "PIB:", carta2.pib);
    printf("%s %d\n", "Numero de Pontos Turisticos:", carta2.pontoDeTurismo);
    printf("%s %.1f\n", "Densidade Populacional:", carta2.densidadePopulacional);
    printf("%s %.3f\n", "PIB Per Capita:", carta2.pibPerCapita);
    printf("%s %.3f\n", "Super Poder:", carta2.superPoder);

    return 0;
}

// COMPARAÇÃO DAS CARTAS
int compararCartas(struct Carta carta1, struct Carta carta2)
{
    printf("\n--> COMPARAÇÃO DAS CARTAS <--\n");

    printf("Habitantes: %d\n", carta1.habitantes > carta2.habitantes);
    printf("Area em KM: %d\n", carta1.areaEmKm > carta2.areaEmKm);
    printf("PIB: %d\n", carta1.pib > carta2.pib);
    printf("PIB Per Capita: %d\n", carta1.pibPerCapita > carta2.pibPerCapita);
    printf("Pontos De Turismo: %d\n", carta1.pontoDeTurismo > carta2.pontoDeTurismo);
    printf("Densidade Populacional (menor vence): %d\n", carta1.densidadePopulacional < carta2.densidadePopulacional);
    printf("Super Poder: %d\n", carta1.superPoder > carta2.superPoder);
}

// VERIFICAÇÃO DO VENCEDOR
void verificarVencedor(struct Carta carta1, struct Carta carta2)
{
    int vitoriaCarta1 = 0;
    int vitoriaCarta2 = 0;

    // comparação dos atributos
    if (carta1.habitantes > carta2.habitantes)
        vitoriaCarta1++;
    else if (carta1.habitantes < carta2.habitantes)
        vitoriaCarta2++;

    if (carta1.areaEmKm > carta2.areaEmKm)
        vitoriaCarta1++;
    else if (carta1.areaEmKm < carta2.areaEmKm)
        vitoriaCarta2++;

    if (carta1.pib > carta2.pib)
        vitoriaCarta1++;
    else if (carta1.pib < carta2.pib)
        vitoriaCarta2++;

    if (carta1.pibPerCapita > carta2.pibPerCapita)
        vitoriaCarta1++;
    else if (carta1.pibPerCapita < carta2.pibPerCapita)
        vitoriaCarta2++;

    if (carta1.pontoDeTurismo > carta2.pontoDeTurismo)
        vitoriaCarta1++;
    else if (carta1.pontoDeTurismo < carta2.pontoDeTurismo)
        vitoriaCarta2++;

    if (carta1.densidadePopulacional < carta2.densidadePopulacional)
        vitoriaCarta1++;
    else if (carta1.densidadePopulacional > carta2.densidadePopulacional)
        vitoriaCarta2++;

    if (carta1.superPoder > carta2.superPoder)
        vitoriaCarta1++;
    else if (carta1.superPoder < carta2.superPoder)
        vitoriaCarta2++;

    // mostra o resultado
    if (vitoriaCarta1 > vitoriaCarta2)
        printf("\n\n-> CARTA 1 E a vencedora! <-\n\n");
    else if (vitoriaCarta2 > vitoriaCarta1)
        printf("\n\n-> CARTA 2 É a vencedora! <-\n\n");
    else
        printf("\n\n-> EMPATE ENTRE AS CARTAS! <-\n\n");
}

//COMPARAÇÃO DAS CARTAS
void compararCartasOpcao(struct Carta carta1, struct Carta carta2) {
    int opcao;
    
    printf("\n==> ESCOLHA UM ATRIBUTO PARA COMPARAR:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    printf("Comparando as cidades: %s vs %s\n", carta1.nomeDaCidade, carta2.nomeDaCidade);

    Sleep(1500);

    switch (opcao)
    {
    case 1:
        printf("Habitantes: %lu vs %lu\n", carta1.habitantes, carta2.habitantes);
        if(carta1.habitantes > carta2.habitantes) {
            printf("->%s venceu!\n", carta1.nomeDaCidade);
        } else if (carta1.habitantes < carta2.habitantes) {
            printf("->%s venceu!\n", carta2.nomeDaCidade);
        } else {
            printf("-> Empate!\n");
        }
        break;
        Sleep(1200);                                                                                       
    case 2:
        printf("Area: %.2f vs %.2f\n", carta1.areaEmKm, carta2.areaEmKm);
        if(carta1.areaEmKm > carta2.areaEmKm) {
            printf("->%s venceu!\n", carta1.nomeDaCidade);
        } else if (carta1.areaEmKm < carta2.areaEmKm) {
            printf("->%s venceu!\n", carta2.nomeDaCidade);
        } else {
            printf("-> Empate!\n");
        }
        break;
        Sleep(1200); 
    case 3:
        printf("PIB: %.2f vs %.2f\n", carta1.pib, carta2.pib);
        if(carta1.pib > carta2.pib) {
            printf("->%s venceu!\n", carta1.nomeDaCidade);
        } else if (carta1.pib < carta2.pib) {
            printf("->%s venceu!", carta2.nomeDaCidade);
        } else {
            printf("-> Empate!\n");
        }
        break;
        Sleep(1200); 
    case 4:
        printf("Pontos Turisticos: %d vs %d\n", carta1.pontoDeTurismo, carta2.pontoDeTurismo);
        if(carta1.pontoDeTurismo > carta2.pontoDeTurismo) {
            printf("%s venceu!\n", carta1.nomeDaCidade);
        } else if (carta1.pontoDeTurismo < carta2.pontoDeTurismo) {
            printf("%s venceu!", carta2.nomeDaCidade);
        } else {
            printf("-> Empate!\n");
        }
        break;
        Sleep(1200); 
    case 5:
        printf("Densidade Populacional: %.2f vs %.2f\n", carta1.densidadePopulacional, carta2.densidadePopulacional);
        if(carta1.densidadePopulacional < carta2.densidadePopulacional) {
            printf("%s venceu! (menor densidade vence)\n", carta1.nomeDaCidade);
        } else if (carta1.densidadePopulacional > carta2.densidadePopulacional) {
            printf("%s venceu! (menor densidade vence)\n", carta2.nomeDaCidade);
        } else {
            printf("-> Empate!\n");
        }
        break;
        Sleep(1200); 
    default:
        printf("Opcao invalida. Nenhuma comparacao realizada.\n");
        break;
    }
}

// CONTEUDO PRINCIPAL
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
    scanf(" %[^\n]", carta1.nomeDaCidade);

    printf("Quantidade de habitantes: ");
    scanf("%lu", &carta1.habitantes);

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
    scanf(" %[^\n]", carta2.nomeDaCidade);

    printf("Quantidade de habitantes: ");
    scanf("%lu", &carta2.habitantes);

    printf("Informe qual a area em Quilometros: ");
    scanf("%f", &carta2.areaEmKm);

    printf("Informe o PIB: ");
    scanf("%f", &carta2.pib);

    printf("Quantos pontos turisticos: ");
    scanf("%d", &carta2.pontoDeTurismo);

    // CALCULOS
    carta1.densidadePopulacional = carta1.habitantes / carta1.areaEmKm;
    carta1.pibPerCapita = carta1.pib / carta1.habitantes;

    carta2.densidadePopulacional = carta2.habitantes / carta2.areaEmKm;
    carta2.pibPerCapita = carta2.pib / carta2.habitantes;

    // calculo super poder
    carta1.superPoder = carta1.habitantes +
                        carta1.areaEmKm +
                        carta1.pib +
                        carta1.pontoDeTurismo +
                        carta1.pibPerCapita +
                        carta1.densidadePopulacional;

    carta2.superPoder = carta2.habitantes +
                        carta2.areaEmKm +
                        carta2.pib +
                        carta2.pontoDeTurismo +
                        carta2.pibPerCapita +
                        carta2.densidadePopulacional;
    // FIM CALCULOS
    exibeResultado(carta1, carta2);
    compararCartas(carta1, carta2);
    verificarVencedor(carta1, carta2);
    Sleep(2000);
    compararCartasOpcao(carta1, carta2);

    return 0;
}