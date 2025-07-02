#include <stdio.h>

int main() {
    char estado;
    char codigo[50];
    char nome[50];
    int populaçao;
    float area;
    float pib;
    int turisticos;

    printf("Seja bem-vindo ao super trunfo! Aqui vamos realizar o cadastro das suas cartas!\n");

    printf("Vamos começar cadastrando uma das suas cartas! Informe o Estado da sua carta:\n");
    scanf(" %c", &estado);

    printf("Informe agora o nome da cidade: \n");
    scanf("%s", nome);

    printf("Insira o código da cidade: \n");
    scanf("%s", codigo);

    printf("Informe a população da cidade: \n");
    scanf("%i", &populaçao);

    printf("Defina a área em km²: \n");
    scanf("%f", &area);

    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Informe quantos pontos turísticos há na cidade: \n");
    scanf("%i", &turisticos);

    float densidade = (float)populaçao / area;
    float pibp = pib / (float)populaçao;

    printf("Abaixo vão aparecer as informações da sua Carta 1\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %i\n", populaçao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Quantidade de pontos turísticos: %i\n", turisticos);
    printf("A densidade populacional é: %.2f hab/km²\n", densidade);
    printf("O PIB per capita é de: %.2f reais\n", pibp);
    printf("Prontinho, essa é a sua carta número 1\n");

    // Segunda carta
    char estado2;
    char codigo2[50];
    char nome2[50];
    int populaçao2;
    float area2;
    float pib2;
    int turisticos2;

    printf("Vamos começar cadastrando a segunda carta! Informe o Estado da sua carta:\n");
    scanf(" %c", &estado2);

    printf("Informe agora o nome da cidade: \n");
    scanf("%s", nome2);

    printf("Insira o código da cidade: \n");
    scanf("%s", codigo2);

    printf("Informe a população da cidade: \n");
    scanf("%i", &populaçao2);

    printf("Defina a área em km²: \n");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Informe quantos pontos turísticos há na cidade: \n");
    scanf("%i", &turisticos2);

    float densidade2 = (float)populaçao2 / area2;
    float pibp2 = pib2 / (float)populaçao2;

    printf("Abaixo vão aparecer as informações da sua Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %i\n", populaçao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Quantidade de pontos turísticos: %i\n", turisticos2);
    printf("A densidade populacional é: %.2f hab/km²\n", densidade2);
    printf("O PIB per capita é de: %.2f reais\n", pibp2);
    printf("Prontinho, essa é a sua carta número 2\n");

    return 0;
}