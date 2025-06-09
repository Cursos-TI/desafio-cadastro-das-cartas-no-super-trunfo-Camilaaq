#include <stdio.h>

     // Desafio Super Trunfo - Paises - Nivel Aventureiro
     // Tema 1 - Cadastro das Cartas
     // Esse codigo inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
     // Teste Camila Quatrin

    int main (){

     // Carta 1 - Declaracao de variaveis 
        
    // Codigo da cidade 1
        int codigo1;

    // Nome da cidade 1
        char nome1[50];

    // Populacao da cidade 1
        int populacao1;

    // Area da cidade 1
        float area1;

    // PIB da cidade 1 
        float pib1;

    // Numero de pontos turisticos da cidade 1
        int pontos_turisticos1;

    // Densidade populacional: populacao / area 
        float densidade1;

    // PIB per Capita: PIB / populacao 
        float pib_per_capita1;

    // Cadastro da Carta 1
    // Solicitando os dados da primeira cidade

        printf("Digite o codigo da cidade 1:\n");
        scanf("%d", &codigo1);

        printf("Digite o nome da cidade 1:\n");
        scanf("%s", &nome1);  

        printf("Digite a populacao da cidade 1:\n");
        scanf("%d", &populacao1);

        printf("Digite a area da cidade 1 (em km2):\n");
        scanf("%f", &area1);

        printf("Digite o PIB da cidade 1:\n");
        scanf("%f", &pib1);

        printf("Digite o numero de pontos turisticos da cidade 1:\n");
        scanf("%d", &pontos_turisticos1);

    // Calculo da densidade populacional e PIB per capita da carta 1
    
        densidade1 = populacao1 / area1;

        pib_per_capita1 = pib1 / populacao1;



    // Carta 2 - Declaracao de variaveis

    // Codigo da cidade 2
        int codigo2;

    // Nome da cidade 2
        char nome2[50];

    // Populacao da cidade 2
        int populacao2;

    // Area da cidade 2
        float area2;

    // PIB da cidade 2 
        float pib2;

     // Numero de pontos turisticos da cidade 2
        int pontos_turisticos2;

    // Densidade populacional: populacao / area 
        float densidade2;

    // PIB per Capita: PIB / populacao 
        float pib_per_capita2;

    // Cadastro da Carta 2
    // Solicitando os dados da primeira cidade

        printf("Digite o codigo da cidade 2:\n");
        scanf("%d", &codigo2);

        printf("Digite o nome da cidade 2:\n");
        scanf("%s", &nome2);  

        printf("Digite a populacao da cidade 2:\n");
        scanf("%d", &populacao2);

        printf("Digite a area da cidade 2 (em km2):\n");
        scanf("%f", &area2);

        printf("Digite o PIB da cidade 2:\n");
        scanf("%f", &pib2);

        printf("Digite o numero de pontos turisticos da cidade 2:\n");
        scanf("%d", &pontos_turisticos2);

     // Calcula a densidade populacional e o PIB per capita da carta 2
        densidade2 = populacao2 / area2;
        pib_per_capita2 = pib2 / populacao2;

     // Exibição das informações da carta 1
        printf("\n===== Carta 1 =====\n");
        printf("Código: %d\n", codigo1);
        printf("Nome: %s\n", nome1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f\n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Pontos turísticos: %d\n", pontos_turisticos1);
        printf("Densidade populacional: %.2f\n", densidade1);
        printf("PIB per capita: %.2f\n", pib_per_capita1);


    // Exibição das informações da carta 2
        printf("\n===== Carta 2 =====\n");
        printf("Código: %d\n", codigo2);
        printf("Nome: %s\n", nome2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f\n", area2);
        printf("PIB: %.2f\n", pib2);
        printf("Pontos turísticos: %d\n", pontos_turisticos2);
        printf("Densidade populacional: %.2f\n", densidade2);
        printf("PIB per capita: %.2f\n", pib_per_capita2);


     return 0;
}