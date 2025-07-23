#include <stdio.h>

int main() {
// Cadastro de Cartas
    char estado;
    char codigo[4];
    char idade[10];
    int populacao;
    float area;
    float pib;
    int ptr; /*pontos turisticos*/
    
    printf("𖨠 Bem Vindo ao Super Trunfo - Card City 𖨠\n\n ✢ Insira as informações solicitadas. ✢\n\n");

    printf("Selecione uma letra de A a H:");
    scanf("%s", &estado);

    printf("Digite o codigo da Cidade. Ex: D001: ");
    scanf("%s", &codigo);

    printf("Digite o nome da Cidade. Ex: Brasilia: ");
    scanf("%s", &cidade);

    printf("Digite o total de moradores na cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área (tamanho) da cidade. Ex: 1000 (km²): ");
    scanf("%f", &area);

    printf("Digite digite qual o PIB da cidade: ");
    scanf("%f", &pib);
    
    printf("Quantos pontos turísticos a cidade possui?: ");
    scanf("%d", &ptr);

    printf("✦✦Carta Cadastrada com Sucesso!!✦✦\n\n ┌┌Informações da Carta:┐┐ \n\n");

    printf("Código do Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.1f km² \n", area);
    printf("PIB: %.1f \n", pib);
    printf("Total pontos turísticos: %d \n", ptr);

    return 0;
}
