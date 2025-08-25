#include <stdio.h>

int main() {

    char start; /*Variável para armazenar a ação do usuário*/

    unsigned char estado[2], estado2[2];  /*Variável para armazenar a letra do estado*/
    unsigned char codigo[50], codigo2[50]; /*Variável para armazenar o código da cidade*/
    char cidade[50], cidade2[50]; /*Variável para armazenar o nome da cidade*/
    unsigned int populacao, populacao2; /*Variável para armazenar número da população*/
    float area, area2; /*Variável para armazenar o tamanho da área*/
    float pib, pib2;  /*Variável para armazenar o PIB*/
    unsigned int ptr, ptr2; /*pontos turisticos*/
    
    printf("Bem Vindo ao Super Trunfo - Card City\n\n"); /*Mensagem Boas Vindas*/

    printf("►►  Escolha uma ação: ◄◄\n\n"); /*Menu de Interação*/
    printf("S - Start (Iniciar o jogo)\n"); /*Começa o jogo*/
    printf("R - Regras (Ver as regras do jogo)\n"); /*Mostra as regras do jogo*/
    printf("E - Exit (Encerra o jogo)\n\n"); /*Encerra o jogo*/ 
    scanf("%s", &start); // Lê a ação do usuário

    switch (start) /*Puxa variável start*/
    {
    case 'S': // Inicia o jogo
    case 's':
    
    // Cadastro de Carta Nº1
    
    printf("Cadastre a primeira carta:\n\n");

    printf("↠ Selecione uma letra para a carta, (Ex. A): ");
    scanf("%s",estado); /*Puxa ação do jogador para letra da carta*/

    printf("↠ Digite o codigo da Cidade: ");
    scanf("%s",codigo); /*Puxa ação do jogador para código da cidade*/

    printf("↠ Digite o nome da Cidade: ");
    scanf(" %49[^\n]", cidade); /*Puxa ação do jogador para nome da cidade*/

    printf("↠ Digite o total de moradores na cidade: ");
    scanf("%d", &populacao); /*Puxa ação do jogador para número da população*/

    printf("↠ Digite a área (tamanho) da cidade: ");
    scanf("%f", &area); /*Puxa ação do jogador para tamanho da área*/

    printf("↠ Digite digite qual o PIB da cidade: ");
    scanf("%f", &pib); /*Puxa ação do jogador para PIB*/

    printf("↠ Quantos pontos turísticos a cidade possui?: ");
    scanf("%d", &ptr); /*Puxa ação do jogador para pontos turísticos*/

    printf("✓ Carta Nº1 Cadastrada!\n\n"); /*Mensagem de carta cadastrada, deu tudo certo 👍*/

    float media, media3, media6; /*Variável para armazenar a média dos atributos*/

    media = (float) (populacao / area); /* Calcula Densidade populacional*/
    media3 = (float) (pib / populacao); /* Calcula PIB Per Capita*/
    media6 = (float) (area / populacao); /* Calcula Inverso Densidade populacional*/ 


    //Cadastro da Segunda Carta

    printf("➢ Cadastre a segunda carta:\n\n");

    printf("↠ Selecione uma letra para a carta, (Ex. B): ");
    scanf("%s",estado2); /*Puxa ação do jogador para letra da carta*/

    printf("↠ Digite o codigo da Cidade: ");
    scanf("%s",codigo2); /*Puxa ação do jogador para código da cidade*/

    printf("↠ Digite o nome da Cidade: ");
    scanf(" %49[^\n]", cidade2); /*Puxa ação do jogador para nome da cidade*/

    printf("↠ Digite o total de moradores na cidade: ");
    scanf("%d", &populacao2); /*Puxa ação do jogador para número da população*/

    printf("↠ Digite a área (tamanho) da cidade: ");
    scanf("%f", &area2); /*Puxa ação do jogador para tamanho da área*/

    printf("↠ Digite digite qual o PIB da cidade: ");
    scanf("%f", &pib2); /*Puxa ação do jogador para PIB*/
    
    printf("↠ Quantos pontos turísticos a cidade possui?: ");
    scanf("%d", &ptr2); /*Puxa ação do jogador para pontos turísticos*/

    printf("✓ Carta Nº2 Cadastrada!\n\n");

    float media2, media4, media5; /*Variável para armazenar a média dos atributos da carta 2*/

    media2 = (float) (populacao2 / area2); /*Densidade populacional*/
    media4 = (float) (pib2 / populacao2); /*PIB Per Capita*/
    media5 = (float) (area2 / populacao2); /*Inverso Densidade populacional*/


    // Chat Log da Carta1

    printf("✦✦ Cartas Cadastradas com Sucesso!! ✦✦\n\n");

    printf("┌┌Informações da Carta Nº1:┐┐\n\n");

    printf("Letra do estado: %s\n",estado); /*Puxar letra do estado e exibe no terminal*/
    printf("Código: %s\n",codigo); /*Puxar código da cidade e exibe no terminal*/
    printf("Nome da Cidade: %s\n",cidade); /*Puxar nome da cidade e exibe no terminal*/
    printf("População: %d \n",populacao); /*Puxar população e exibe no terminal*/
    printf("Área: %.1f km² \n",area); /*Puxar área e exibe no terminal*/
    printf("PIB: %.1f \n",pib); /*Puxar PIB e exibe no terminal*/
    printf("Total pontos turísticos: %d\n",ptr); /*Puxar pontos turísticos e exibe no terminal*/
    printf("Densidade Populacional: %.2f hab/km²\n", media); /*Puxar Densidade Populacional e exibe no terminal*/
    printf("PIB Per Capita: %.2f reais\n\n", media3); /*Puxar PIB Per Capita e exibe no terminal*/

    float desidadeepib; /*Puxar Densidade e PIB Per Capita*/
    desidadeepib = (float) (media + media3); /*Soma Densidade e PIB Per Capita*/ 

    printf("Valor de Densidade e PIB Per Capita: %.0f\n\n", desidadeepib); /*Exibe soma de Densidade e PIB Per Capita*/

    float superpoder; /*Armazena variável Super Poder*/
    superpoder = populacao + area + pib + ptr + media3 + media6; /*Soma todos os atributos da carta para formar o Super Poder*/

    printf("Super Poder: %f\n\n", superpoder); /*Exibe o Super Poder*/


    // Chat log da Carta 2

    printf("┌┌Informações da Carta Nº2:┐┐\n\n");

    printf("Letra do estado: %s\n",estado2); /*Puxar letra do estado e exibe no terminal*/
    printf("Código: %s\n",codigo2); /*Puxar código da cidade e exibe no terminal*/
    printf("Nome da Cidade: %s\n",cidade2); /*Puxar nome da cidade e exibe no terminal*/
    printf("População: %d \n",populacao2); /*Puxar população e exibe no terminal*/
    printf("Área: %.1f km² \n",area2); /*Puxar área e exibe no terminal*/
    printf("PIB: %.1f \n",pib2); /*Puxar PIB e exibe no terminal*/
    printf("Total pontos turísticos: %d\n",ptr2); /*Puxar pontos turísticos e exibe no terminal*/
    printf("Densidade Populacional: %.2f hab/km²\n", media2); /*Puxar Densidade Populacional*/
    printf("PIB Per Capita: %.2f reais \n\n", media4); /*Puxar PIB Per Capita*/

    float desidadeepib2; /*Puxar Densidade e PIB Per Capita 2*/
    desidadeepib2 = (float) (media2 + media4); /*Soma Densidade e PIB Per Capita*/

    printf("Valor de Densidade e PIB Per Capita: %.0f\n\n", desidadeepib2); /*Exibe soma de Densidade e PIB Per Capita*/

    float superpoder2; /* Armazena variável Super Poder 2 */
    superpoder2 = populacao2 + area2 + pib2 + ptr2 + media3 + media5; /*Soma todos os atributos da carta para formar o Super Poder*/

    printf("Super Poder: %f\n\n", superpoder2); /*Exibe o Super Poder*/

    int comparar, comparar2, comparar3, comparar4; /*Variável para armazenar o atributo que o usuário deseja comparar*/
    int resultado, resultado2; /*Variável para armazenar o resultado da comparação*/

// Primeira carta
    printf("✦✦ Vamos Comparar Dois Atributos ✦✦\n\n");

    printf("✦ Escolha dois atributos para a Carta 1 ✦\n\n");

    printf("***Escolha: ***\n\n");

    printf("1 - População: %d\n", populacao); /*Opção 1, mostra o valor da população*/
    printf("2 - Área: %.0f\n", area); /*Opção 2, mostra valor da area*/
    printf("3 - PIB: %.0f\n", pib); /*Opção 3, mostra valor do PIB*/
    printf("4 - Pontos Turísticos: %d\n", ptr);  /*Opção 4, mostra valor dos pontos turísticos*/
    printf("5 - Densidade Demográfica: %f\n\n", media6); /*Opção 5, mostra valor da Densidade Demográfica*/

    printf("Digite o primeiro número do atributo que deseja comparar: \n");
    scanf("%d", &comparar); /*Lê a opção escolhida pelo usuário*/
    printf("Digite o segundo número do atributo que deseja comparar: ");
    scanf("%d", &comparar2); /*Lê a opção escolhida pelo usuário*/

    if (comparar == comparar2) {
        printf("Você escolheu comparar o mesmo atributo! Por favor, escolha atributos diferentes.\n");
        return 0; // Encerrar o programa se os atributos forem iguais
    } else {
        switch (comparar) // Verifica a opção escolhida pelo usuário e troca pelo valor da opção
     {
        case 1:
          comparar = populacao; /*Troca número da opção pelo valor da população*/
          break;

        case 2:
          comparar = area; /*Troca número da opção pelo valor da área*/
          break;
        case 3:
          comparar = pib; /*Troca número da opção pelo valor do PIB*/
          break;

        case 4:
          comparar = ptr; /*Troca número da opção pelo valor dos pontos turísticos*/
          break;

        case 5:
          comparar = media6; /*Troca número da opção pelo valor da Densidade Demográfica*/
          break;
    
     default:
        printf("Opção inválida! Por favor, escolha um número entre 1 e 5.\n"); /* Quebra a ação, caso opção seja inválida.*/
        return 0; // Encerrar o programa se a opção for inválida
        break;
    } switch (comparar2) // Verifica a opção escolhida pelo usuário e troca pelo valor da opção
    {
        case 1:
          comparar2 = populacao; /*Troca número da opção pelo valor da população*/
          break;

        case 2:
          comparar2 = area; /*Troca número da opção pelo valor da área*/
          break;
        case 3:
          comparar2 = pib; /*Troca número da opção pelo valor do PIB*/
          break;

        case 4:
          comparar2 = ptr; /*Troca número da opção pelo valor dos pontos turísticos*/
          break;

        case 5:
          comparar2 = media6; /*Troca número da opção pelo valor da Densidade Demográfica*/
          break;
    
     default:
        printf("Opção inválida! Por favor, escolha um número entre 1 e 5.\n"); /* Quebra a ação, caso opção seja inválida.*/
        return 0; // Encerrar o programa se a opção for inválida
        break;
    }
    } 



    resultado = comparar + comparar2; // Soma dos atributos escolhidos da carta 1

   
// Segunda carta
    printf("\n\n✦✦ Agora vamos comparar com a Carta 2 ✦✦\n\n");

    printf("***Escolha: ***\n\n");

    printf("1 - População: %d\n", populacao2); /*Opção 1, mostra o valor da população*/
    printf("2 - Área: %.0f\n", area2); /*Opção 2, mostra valor da area*/
    printf("3 - PIB: %.0f\n", pib2); /*Opção 3, mostra valor do PIB*/
    printf("4 - Pontos Turísticos: %d\n", ptr2); /*Opção 4, mostra valor dos pontos turísticos*/
    printf("5 - Densidade Demográfica: %f\n\n", media5); /*Opção 5, mostra valor da Densidade Demográfica*/

    printf("Digite o primeiro número do atributo que deseja comparar: \n");
    scanf("%d", &comparar3);  /*Lê a opção escolhida pelo usuário*/
    printf("Digite o segundo número do atributo que deseja comparar: ");
    scanf("%d", &comparar4);  /*Lê a opção escolhida pelo usuário*/

    if (comparar3 == comparar4) {
        printf("Você escolheu comparar o mesmo atributo! Por favor, escolha atributos diferentes.\n");
        return 0; // Encerrar o programa se os atributos forem iguais
    } else {
        switch (comparar3) // Verifica a opção escolhida pelo usuário e troca pelo valor da opção
     {
        case 1:
          comparar3 = populacao2; /*Troca número da opção pelo valor da população*/
          break;

        case 2:
          comparar3 = area2; /*Troca número da opção pelo valor da área*/
          break;
        case 3:
          comparar3 = pib2; /*Troca número da opção pelo valor do PIB*/
          break;

        case 4:
          comparar3 = ptr2; /*Troca número da opção pelo valor dos pontos turísticos*/
          break;

        case 5:
          comparar3 = media5; /*Troca número da opção pelo valor da Densidade Demográfica*/
          break;
    
     default:
        printf("Opção inválida! Por favor, escolha um número entre 1 e 5.\n"); /* Quebra a ação, caso opção seja inválida.*/
        return 0; // Encerrar o programa se a opção for inválida
        break;
    } switch (comparar4) // Verifica a opção escolhida pelo usuário e troca pelo valor da opção
    {
        case 1:
          comparar4 = populacao2; /*Troca número da opção pelo valor da população*/
          break;

        case 2:
          comparar4 = area2; /*Troca número da opção pelo valor da área*/
          break;
        case 3:
          comparar4= pib2; /*Troca número da opção pelo valor do PIB*/
          break;

        case 4:
          comparar4= ptr2; /*Troca número da opção pelo valor dos pontos turísticos*/
          break;

        case 5:
          comparar4= media5; /*Troca número da opção pelo valor da Densidade Demográfica*/
          break;
    
     default:
        printf("Opção inválida! Por favor, escolha um número entre 1 e 5.\n"); /* Quebra a ação, caso opção seja inválida.*/
        return 0; // Encerrar o programa se a opção for inválida
        break;
    }
    } 

    resultado2 = comparar3 + comparar4; // Soma dos atributos escolhidos da carta 2

    
    char acao; // Variável para armazenar a ação do usuário


    printf("►►  Escolha uma ação: ◄◄\n\n"); /*Menu de Interação*/
    printf("S - Start (Começa a Batalha)\n"); /*Começa a batalha */
    printf("E - Exit"); /*Encerra o jogo*/

    printf("\n\nDigite a ação desejada: "); 
    scanf("%s", &acao); // Lê a ação do usuário

    switch (acao){ // Verifica a ação escolhida pelo usuário
    case 'S': // Inicia a batalha
    case 's':
    
        printf("➱➱ Iniciando a batalha!\n\n");

        printf("Cidade %s contra %s.\n", cidade, cidade2); //Mostra o nome das cidades das cartas
        
        printf("Valor de cada atribulto da Carta 1 %d, %d\n",  comparar, comparar2); //Mostra os valores dos atributos escolhidos da carta 1
        printf("Valor de cada atribulto da Carta 2 %d, %d\n\n", comparar3, comparar4); //Mostra os valores dos atributos escolhidos da carta 2
        printf("Resultado da carta 1: %d\n", resultado); //Mostra o resultado da carta 1
        printf("Resultado da carta 2: %d\n", resultado2); //Mostra o resultado da carta 2

        if (resultado > resultado2) {
            printf("A Carta 1 vence!\n"); /*Se o valor da carta 1 for maior, ela vence*/
        } else if (resultado2 > resultado) {
            printf("A Carta 2 vence!\n"); /*Se o valor da carta 2 for maior, ela vence*/
        } else {
            printf("As cartas são iguais! Nenhuma vence.\n"); /*Se não, da empate*/
        }
        break;

    case 'E': // Encerra o jogo
    case 'e':
        printf("Saindo do jogo...\n");

        break;
    default:
        printf("Ação inválida! Por favor, escolha S para Start ou E para Exit.\n");  /* Quebra a ação, caso opção seja inválida.*/
        break;
    }
    
      return 0;
      break;

    case 'r':
    case 'R': /*Mostra as regras do jogo*/

      printf("✦✦ Regras do Jogo ✦✦\n\n");
      printf("1 - Cada jogador cadastra uma carta com informações de uma cidade.\n");
      printf("2 - As cartas possuem atributos como população, área, PIB, pontos turísticos, densidade populacional e PIB per capita.\n");
      printf("3 - Os jogadores escolhem dois atributos para comparar entre as cartas.\n");
      printf("4 - A soma dos valores dos atributos escolhidos determina o vencedor da rodada.\n");
      printf("5 - O jogador com a maior soma de atributos vence a rodada.\n");
      printf("6 - Em caso de empate, nenhuma carta vence.\n");
     
      printf("✦✦ Divirta-se jogando! ✦✦\n\n");

      return 0; /*Encerra programa*/
      break;

    case 'e': /*Fim de jogo, você desistiu de jogar :(*/
    case 'E':
    
      printf("Saindo do jogo...\n"); /*Bye fracassado*/
      return 0; /*Encerra programa*/
      break;
    
    default:
      printf("Opção inválida! Por favor, escolha 'start' para iniciar, 'regras' para ver as regras ou 'sair' para encerrar.\n");
      break;
    }

    return 0;

}