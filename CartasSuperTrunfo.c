#include <stdio.h>


int comparar_maior(float a, float b) {
    return a > b ? 1 : 0;
}

int comparar_menor(float a, float b) {
    return a < b ? 1 : 0;
}


int main() {
    // Variáveis para a Carta 1
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float superPoder1;


    // Variáveis para a Carta 2
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float superPoder2;

    // Calcula Densidade e Per Capita 1
    float densidadePopulacional1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;
    float superPoder1 = populacao1 + pib1 + (1.0f / densidadePopulacional1) + pibPerCapita1 + pontosTuristicos1;
   
     // Calcula Densidade e Per Capita 2
    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;
    float superPoder2 = populacao2 + pib2 + (1.0f / densidadePopulacional2) + pibPerCapita2 + pontosTuristicos2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
        
    printf("Digite a População: ");
    scanf("%d", &populacao1);
    
    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    


    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
     
    printf("Digite a População: ");
    scanf("%d", &populacao2);
    
    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %.6f\n", superPoder1);
    

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %.6f\n", superPoder2);


// Comparações
    printf("\nComparacoes (1 = Carta 1 vence, 0 = Carta 2 vence):\n");
    printf("Populacao: %d\n", comparar_maior((float)populacao1, (float)populacao2));
    printf("Area: %d\n", comparar_maior(area1, area2));
    printf("PIB: %d\n", comparar_maior(pib1, pib2));
    printf("Pontos Turisticos: %d\n", comparar_maior((float)pontosTuristicos1, (float)pontosTuristicos2));
    printf("Densidade Populacional: %d\n", comparar_menor(densidadePopulacional1, densidadePopulacional2));
    printf("PIB per Capita: %d\n", comparar_maior(pibPerCapita1, pibPerCapita2));
    printf("Super Poder: %d\n", comparar_maior(superPoder1, superPoder2));


    return 0;
}
