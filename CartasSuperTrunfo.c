#include <stdio.h>

int main() {

    char estado;
    char codigo[4];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int ptr; /*pontos turisticos*/
    
    printf("░ Bem Vindo ao Super Trunfo - Card City░\n ❙❙ Insira as informações solicitadas. ❙❙\n");
    printf("Digite a Letra do Estado, de ( A a H ). Ex: D:\n");
    scanf("%s", &estado);

    printf("Digite o codigo da Cidade. Ex: D001:\n");
    scanf("%s", &codigo);

    printf("Digite o nome da Cidade. Ex: Distrito Federal:\n");
    scanf("%s", &cidade);

    printf("Digite o total de moradores na cidade:\n");
    scanf("%d", &populacao);

    printf("Digite a área (tamanho) da cidade. Ex: 1000000 (Equivalente a 1milhão km²)\n");
    scanf("%f", &area);

    printf("Digite digite qual o PIB da cidade:\n");
    scanf("%f", &pib);
    
    printf("Quantos pontos turísticos a cidade possui?:\n");
    scanf("%d", &ptr);

    printf("Estado: %s\n", &estado);
    printf("Código: %s\n", &codigo);
    printf("Nome da Cidade: %s\n", &cidade);
    printf("População: %d\n", &populacao);
    printf("Área: %f km²\n", &area);
    printf("PIB: %f\n", &pib);
    printf("Total pontos turísticos: %d\n", &ptr);



    printf("⇉ Carta Cadastrada com Sucesso ⇇");




    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
