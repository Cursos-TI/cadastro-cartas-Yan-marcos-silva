#include <stdio.h>
int main(){

    //variáveis//
    char estado, estado2, codigo[3],codigo2[3], cidade[20], cidade2[20];
    int populacao, populacao2, pontos_t, pontos_t2;
    float area, area2, pib2, pib;

    //COLETA DE DADOS//
    printf("Insira os dados de 2 cartas do Super Trunfo\n\n");
    
    //CARTA 1//
    printf("Carta 1:\n");
    printf("Digite a letra do Estado de 'A' a 'H':");
    scanf("%c", &estado);

    printf("Digite a letra do Estado seguida de um número de 01 a 04:");
    scanf("%s", codigo);

    printf("Digite o nome da Cidade:");
    scanf("%s", cidade);

    printf("Digite o número da População:");
    scanf("%d", &populacao);

    printf("Digite a área em km²:");
    scanf("%f", &area);

    printf("Digite o PIB:");
    scanf("%f", &pib);

    printf("Informe o número de pontos turísticos:");
    scanf(" %d", &pontos_t);
    printf("\n\n");
    
    //CARTA 2//
    printf("Carta 2:");

    printf("Digite a letra do Estado de 'A' a 'H':");
    scanf(" %c", &estado2);

    printf("Digite a letra do Estado seguida de um número de 01 a 04:");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade:");
    scanf("%s", cidade2);

    printf("Digite o número da População:");
    scanf("%d", &populacao2);

    printf("Digite a área em km²:");
    scanf("%f", &area2);

    printf("Digite o PIB:");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos:");
    scanf("%d", &pontos_t2);
    printf("\n\n");

    //RESULTADO DA COLETA DE DADOS//
    printf("CARTA 1\n");
    printf("ESTADO:%c\n", estado);
    printf("CÓDIGO:%s\n", codigo);
    printf("CIDADE:%s\n", cidade);
    printf("POPULAÇÃO:%d habitantes\n", populacao);
    printf("ÁREA:%.2f km²\n", area);
    printf("PIB:R$%.2f\n", pib);
    printf("PONTOS TURÍSTICOS:%d\n\n", pontos_t);

    //RESULTADO DA COLETA DE DADOS//
    printf("CARTA 2\n");
    printf("ESTADO:%c\n", estado2);
    printf("CÓDIGO:%s\n", codigo2);
    printf("CIDADE:%s\n", cidade2);
    printf("POPULAÇÃO:%d habitantes\n", populacao2);
    printf("ÁREA:%.2f km²\n", area2);
    printf("PIB:R$%.2f\n", pib2);
    printf("PONTOS TURÍSTICOS:%d\n\n", pontos_t2);

    return 0;
}