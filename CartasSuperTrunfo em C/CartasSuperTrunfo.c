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

    // int rpopulacao, rarea, rpib, rptr, rmedia, rmedia3, rsuperpoder;

    // rpopulacao = populacao > populacao2;
    // rarea = area > area2;
    // rpib = pib > pib2;
    // rptr = ptr > ptr2;
    // rmedia = media < media2;
    // rmedia3 = media3 > media4;
    // rsuperpoder = superpoder > superpoder2;
    

    // printf("✦✦ COMPARAÇÃO DE CARTAS ✦✦\n\n");
    // printf("Se o resultado for 1, Carta 1 vence! ✦✦\n ✦✦ Se o resultado for 0, a carta 2 vence!\n\n");

    // printf("Resultado área: %d\n\n", rarea);
    // printf("Resultado população: %d\n\n", rpopulacao);
    // printf("Resultado PIB: %d\n\n", rpib);
    // printf("Resultado Pontos Turísticos: %d\n\n", rptr);
    // printf("Resultad Densidade Populacional: %d\n\n", rmedia);
    // printf("Resultado PIB per Capita: %d\n\n", rmedia3);
    // printf("Resultado Super Poder: %d\n\n", rsuperpoder);


    int comparar, comparar2, comparar3, comparar4;;
    int resultado, resultado2;
// Primeira carta
    printf("✦✦ Vamos Comparar Dois Atributos ✦✦\n\n");

     printf("✦ Escolha dois atributos para a Carta 1 ✦\n\n");

    printf("***Escolha: ***\n\n");
    printf("1 - População %d\n", populacao);
    printf("2 - Área %.0f\n", area); /*.0 (Não mostra as casas decimais)*/
    printf("3 - PIB %.0f\n", pib); /*  ^^ ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ */
    printf("4 - Pontos Turísticos %d\n", ptr);  
    printf("5 - Densidade Demográfica %f\n\n", media6);

    printf("Digite o primeiro número do atributo que deseja comparar: \n");
    scanf("%d", &comparar);
    printf("Digite o segundo número do atributo que deseja comparar: ");
    scanf("%d", &comparar2);

    if (comparar == comparar2) {
        printf("Você escolheu comparar o mesmo atributo! Por favor, escolha atributos diferentes.\n");
        return 0; // Encerrar o programa se os atributos forem iguais
    } else {
        switch (comparar)
     {
        case 1:
          comparar = populacao;
          break;

        case 2:
          comparar = area;
          break;
        case 3:
          comparar = pib;
          break;

        case 4:
          comparar = ptr;
          break;

        case 5:
          comparar = media6;
          break;
    
     default:
        printf("Opção inválida! Por favor, escolha um número entre 1 e 5.\n");
        return 0; // Encerrar o programa se a opção for inválida
        break;
    } switch (comparar2)
    {
        case 1:
          comparar2 = populacao;
          break;

        case 2:
          comparar2 = area;
          break;
        case 3:
          comparar2 = pib;
          break;

        case 4:
          comparar2 = ptr;
          break;

        case 5:
          comparar2 = media6;
          break;
    
     default:
        printf("Opção inválida! Por favor, escolha um número entre 1 e 5.\n");
        return 0; // Encerrar o programa se a opção for inválida
        break;
    }
    } 



    resultado = comparar + comparar2;

   
// Segunda carta
    printf("\n\n✦✦ Agora vamos comparar com a Carta 2 ✦✦\n\n");

    printf("***Escolha: ***\n\n");
    printf("1 - População %d\n", populacao2);
    printf("2 - Área %.0f\n", area2); /*.0 (Não mostra as casas decimais)*/
    printf("3 - PIB %.0f\n", pib2); /*  ^^ ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ */
    printf("4 - Pontos Turísticos %d\n", ptr2);  
    printf("5 - Densidade Demográfica %f\n\n", media5);

    printf("Digite o primeiro número do atributo que deseja comparar: \n");
    scanf("%d", &comparar3);
    printf("Digite o segundo número do atributo que deseja comparar: ");
    scanf("%d", &comparar4);

    if (comparar3 == comparar4) {
        printf("Você escolheu comparar o mesmo atributo! Por favor, escolha atributos diferentes.\n");
        return 0; // Encerrar o programa se os atributos forem iguais
    } else {
        switch (comparar3) 
     {
        case 1:
          comparar3 = populacao2;
          break;

        case 2:
          comparar3 = area2;
          break;
        case 3:
          comparar3 = pib2;
          break;

        case 4:
          comparar3 = ptr2;
          break;

        case 5:
          comparar3 = media5;
          break;
    
     default:
        printf("Opção inválida! Por favor, escolha um número entre 1 e 5.\n");
        return 0; // Encerrar o programa se a opção for inválida
        break;
    } switch (comparar4)
    {
        case 1:
          comparar4 = populacao2;
          break;

        case 2:
          comparar4 = area2;
          break;
        case 3:
          comparar4= pib2;
          break;

        case 4:
          comparar4= ptr2;
          break;

        case 5:
          comparar4= media5;
          break;
    
     default:
        printf("Opção inválida! Por favor, escolha um número entre 1 e 5.\n");
        return 0; // Encerrar o programa se a opção for inválida
        break;
    }
    } 

    resultado2 = comparar3 + comparar4;

    
    char acao;


    printf("***Escolha uma ação: ***\n\n");
    printf("S - Start (Começa a Batalha)\n");
    printf("E - Exit");

    printf("\n\nDigite a ação desejada: ");
    scanf("%s", &acao);

    switch (acao){
    case 'S':
    case 's':
    
        printf("Iniciando a batalha...\n");

        // printf("Cidades em comparação: %s, %s\n", cidade, cidade2);
        // printf("Atributos escolhidos: %d e %d\n\n", comparar, comparar2);
        // printf("Valor de cada atribulto da Carta 1 %d, %d\n",  resultado, resultado);
        // printf("Valor de cada atribulto da Carta 2 %d, %d\n\n", resultado2, resultado2);
        printf("Resultado da carta 1: %d\n", resultado);
        printf("Resultado da carta 2: %d\n", resultado2);

        if (resultado > resultado2) {
            printf("A Carta 1 vence!\n");
        } else if (resultado2 > resultado) {
            printf("A Carta 2 vence!\n");
        } else {
            printf("As cartas são iguais! Nenhuma vence.\n");
        }
        break;

    case 'E':
    case 'e':
        printf("Saindo do jogo...\n");

        break;
    default:
        printf("Ação inválida! Por favor, escolha S para Start ou E para Exit.\n");
        break;
    }
    return 0;
}
