#include <stdio.h>

int main() {

    char estado;
    char codigo[4];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int ptr; /*pontos turisticos*/
    
    printf("𖨠 Bem Vindo ao Super Trunfo - Card City 𖨠\n\n ✢Insira as informações solicitadas.✢\n\n");

    printf("Digite a Letra do Estado, de ( A a H ). Ex: D: ");
    scanf("%s", &estado);

    printf("Digite o codigo da Cidade. Ex: D001: ");
    scanf("%s", &codigo);

    printf("Digite o nome da Cidade. Ex: Brasilia: ");
    scanf("%s", &cidade);

    printf("Digite o total de moradores na cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área (tamanho) da cidade. Ex: 1000000 (Equivalente a 1milhão km²): ");
    scanf("%f", &area);

    printf("Digite digite qual o PIB da cidade: ");
    scanf("%f", &pib);
    
    printf("Quantos pontos turísticos a cidade possui?: ");
    scanf("%d", &ptr);

    printf("✦✦Carta Cadastrada com Sucesso!!✦✦\n\n ┌┌Informações da Carta:┐┐ \n\n");

    printf("Estado: %s \n", estado);
    
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %f km² \n", area);
    printf("PIB: %f \n", pib);
    printf("Total pontos turísticos: %d \n", ptr);

    printf("Carta Cadastrada com Sucesso\n");


    return 0;
}
