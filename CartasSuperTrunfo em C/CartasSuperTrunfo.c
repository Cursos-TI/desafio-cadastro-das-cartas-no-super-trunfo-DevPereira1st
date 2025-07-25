#include <stdio.h>

int main() {

    unsigned char estado[2], estado2[2];
    unsigned char codigo[50], codigo2[50];
    char cidade[50], cidade2[50];
    unsigned int populacao, populacao2;
    float area, area2;
    float pib, pib2; 
    unsigned int ptr, ptr2; /*pontos turisticos*/
    
    printf("𖨠 Bem Vindo ao Super Trunfo - Card City 𖨠\n\n ✢ Insira as informações solicitadas. ✢\n\n");

    // Cadastro de Carta Nº1
    printf("➢ Cadastre a primeira carta:\n\n");

    printf("↠ Selecione uma letra para a carta, (Ex. A): ");
    scanf("%s",estado);
    printf("↠ Digite o codigo da Cidade: ");
    scanf("%s",codigo);
    printf("↠ Digite o nome da Cidade: ");
    scanf(" %49[^\n]", cidade);
    printf("↠ Digite o total de moradores na cidade: ");
    scanf("%d", &populacao);
    printf("↠ Digite a área (tamanho) da cidade: ");
    scanf("%f", &area);
    printf("↠ Digite digite qual o PIB da cidade: ");
    scanf("%f", &pib);
    printf("↠ Quantos pontos turísticos a cidade possui?: ");
    scanf("%d", &ptr);

    printf("✓ Carta Nº1 Cadastrada!\n\n");

    float media, media3;

    media = (float) (populacao + area) / 2; /*Densidade populacional*/
    media3 = (float) (pib + populacao) / 2; /*PIB Per Capita*/


    //Cadastro da Segunda Carta

    printf("➢ Cadastre a segunda carta:\n\n");

    printf("↠ Selecione uma letra para a carta, (Ex. B): ");
    scanf("%s",estado2);
    printf("↠ Digite o codigo da Cidade: ");
    scanf("%s",codigo2);
    printf("↠ Digite o nome da Cidade: ");
    scanf(" %49[^\n]", cidade2);
    printf("↠ Digite o total de moradores na cidade: ");
    scanf("%d", &populacao2);
    printf("↠ Digite a área (tamanho) da cidade: ");
    scanf("%f", &area2);
    printf("↠ Digite digite qual o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("↠ Quantos pontos turísticos a cidade possui?: ");
    scanf("%d", &ptr2);

    printf("✓ Carta Nº2 Cadastrada!\n\n");

    float media2, media4;

    media2 = (float) (populacao2 + area2) / 2; /*Densidade populacional*/
    media4 = (float) (pib2 + populacao2) / 2; /*PIB Per Capita*/


    // Chat Log da Carta1

    printf("✦✦ Cartas Cadastradas com Sucesso!! ✦✦\n\n");

    printf("┌┌Informações da Carta Nº1:┐┐\n\n");

    printf("Letra do estado: %s\n",estado);
    printf("Código: %s\n",codigo);
    printf("Nome da Cidade: %s\n",cidade);
    printf("População: %d \n",populacao);
    printf("Área: %.1f km² \n",area);
    printf("PIB: %.1f \n",pib);
    printf("Total pontos turísticos: %d\n",ptr);
    printf("Densidade Populacional: %.2f hab/km²\n", media);
    printf("PIB Per Capita: %.2f reais\n\n", media3);

    float desidadeepib; /*Puxar Densidade e PIB Per Capita*/
    desidadeepib = (float) (media + media3);

    printf("Valor de Densidade e PIB Per Capita: %.0f\n\n", desidadeepib);

    unsigned int superpoder;
    superpoder = populacao + area + pib + ptr + media3;

    printf("Super Poder: %d \n\n", populacao + area + pib + ptr + media3);


    // Chat log da Carta 2

    printf("┌┌Informações da Carta Nº2:┐┐\n\n");

    printf("Letra do estado: %s\n",estado2);
    printf("Código: %s\n",codigo2);
    printf("Nome da Cidade: %s\n",cidade2);
    printf("População: %d \n",populacao2);
    printf("Área: %.1f km² \n",area2);
    printf("PIB: %.1f \n",pib2);
    printf("Total pontos turísticos: %d\n",ptr2);
    printf("Densidade Populacional: %.2f hab/km²\n", media2);
    printf("PIB Per Capita: %.2f reais \n\n", media4);

    float desidadeepib2; /*Puxar Densidade e PIB Per Capita 2*/
    desidadeepib2 = (float) (media2 + media4);

    printf("Valor de Densidade e PIB Per Capita: %.0f\n\n", desidadeepib2);

    unsigned int superpoder2;
    superpoder2 = populacao + area + pib + ptr + media3;

    printf("Super Poder: %d\n\n", populacao + area + pib + ptr + media4);

    return 0;
}
