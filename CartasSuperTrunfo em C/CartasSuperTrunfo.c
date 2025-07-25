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

    float media, media3, media6;

    media = (float) (populacao / area); /*Densidade populacional*/
    media3 = (float) (pib / populacao); /*PIB Per Capita*/
    media6 = (float) (area / populacao); /*Inverso Densidade populacional*/


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

    float media2, media4, media5;

    media2 = (float) (populacao2 / area2); /*Densidade populacional*/
    media4 = (float) (pib2 / populacao2); /*PIB Per Capita*/
    media5 = (float) (area2 / populacao2); /*Inverso Densidade populacional*/


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

    float superpoder;
    superpoder = populacao + area + pib + ptr + media3 + media6;

    printf("Super Poder: %f\n\n", superpoder);


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

    float superpoder2;
    superpoder2 = populacao2 + area2 + pib2 + ptr2 + media3 + media5;

    printf("Super Poder: %f\n\n", superpoder2);

    // Comparação das Cartas - Resultado /  Exceto estado, código e nome
    // Populacao, area, pib, ptr, media, media3, superpoder
    // Populacao2, area2, pib2, ptr2, media2, media4, superpoder2

    int rpopulacao, rarea, rpib, rptr, rmedia, rmedia3, rsuperpoder;

    rpopulacao = populacao > populacao2;
    rarea = area > area2;
    rpib = pib > pib2;
    rptr = ptr > ptr2;
    rmedia = media < media2;
    rmedia3 = media3 > media4;
    rsuperpoder = superpoder > superpoder2;
    

    printf("✦✦ COMPARAÇÃO DE CARTAS ✦✦\n\n");
    printf("Se o resultado for 1, Carta 1 vence! ✦✦\n ✦✦ Se o resultado for 0, a carta 2 vence!\n\n");

    printf("Resultado área: %d\n\n", rarea);
    printf("Resultado população: %d\n\n", rpopulacao);
    printf("Resultado PIB: %d\n\n", rpib);
    printf("Resultado Pontos Turísticos: %d\n\n", rptr);
    printf("Resultad Densidade Populacional: %d\n\n", rmedia);
    printf("Resultado PIB per Capita: %d\n\n", rmedia3);
    printf("Resultado Super Poder: %d\n\n", rsuperpoder);

    // Vencedora

    printf("Comparação de cartas (Atributo: Densidade Populacional):\n\n");

    printf("Carta Nº1: %s: %f\n", cidade, media);
    printf("Carta Nº2: %s: %f\n\n", cidade2, media2);

    if (media < media2 ) { 
        printf("Carta 1: %s, é a Vencedora! ✔\n\n", cidade);
    } else {
        printf("Carta 2: %s, é a Vencedora! ✔\n\n", cidade2);
    }

    return 0;
}
