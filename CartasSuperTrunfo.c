int main() {
    char estado;
    char codigo[50];
    char nome[50];
    int populaçao;
    float area;
    float pib;
    int turisticos;
// acima foi "declarada" as variaveis da carta 

//abaixo está sendo capturada informações e declarando as variaves
    printf("Seja bem-vindo ao super trunfo!, aqui vamos realizar a cadastro das suas cartas!\n");

    printf("Vamos começar cadastrar uma das suas cartas! Inoforme o Estado da sua carta:\n");
    scanf("%c", &estado);
    
    printf("Infome agora o nome da cidade: \n");
    scanf("%s", &nome);
    
    printf("Insira o codigo da cidade: \n");
    scanf("%s", &codigo);
    
    printf("Informa a popúlação da cidade: \n");
    scanf("%i", &populaçao);
    
    printf("Defina a área em k²: \n");
    scanf("%f", &area);
    
    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib);
   
    printf("Informe quantos pontos turisticos há na cidade: \n");
    scanf("%i", &turisticos);

    // variavies declaradas, agora o codigo abaixo irá imprimir as informações
            printf("Abaixo vai aparecer a informações da sua Carta 1 \n");
            printf("Estado: %c \n", estado);
            printf("Codigo: %s \n", codigo);
            printf("Nome da cidade: %s \n", nome);
            printf("Polupação: %i \n", populaçao);
            printf("Área: %f km² \n", area);
            printf("Pib: %f bilhões de reais \n", pib);
            printf("Quantidade de pontos turisticos: %i \n", turisticos);
            printf("Prontinho, essa é a sua carta núemro 1 \n");

//carta 1 informada, abaixo é a definição das novas variaveis

    char estado2;
    char codigo2[50];
    char nome2[50];
    int populaçao2;
    float area2;
    float pib2;
    int turisticos2;

// acima "declarada" as variaveis da segunda carta

    printf("Vamos começar cadastrar a segunda carta! Inoforme o Estado da sua carta: \n");
    scanf(" %c", &estado2);
    
    printf("Infome agora o nome da cidade: \n");
    scanf("%s", nome2);
    
    printf("Insira o codigo da cidade: \n");
    scanf("%s", codigo2);
    
    printf("Informa a popúlação da cidade: \n");
    scanf("%i", &populaçao2);
    
    printf("Defina a área em k²: \n");
    scanf("%f", &area2);
    
    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib2);
   
    printf("Informe quantos pontos turisticos há na cidade: \n");
    scanf("%i", &turisticos2);

//abaixo está sendo capturada informações e declarando as variaves

// variavies declaradas, agora o codigo abaixo irá imprimir as informações
            printf("Abaixo vai aparecer a informações da sua Carta 2 \n");
            printf("Estado: %c \n", estado2);
            printf("Codigo: %s \n", codigo2);
            printf("Nome da cidade: %s \n", nome2);
            printf("Polupação: %i \n", populaçao2);
            printf("Área: %f km² \n", area2);
            printf("Pib: %f bilhões de reais \n", pib2);
            printf("Quantidade de pontos turisticos: %i \n", turisticos2);
            printf("Prontinho, essa é a sua carta núemro 2");



    return 0;
}