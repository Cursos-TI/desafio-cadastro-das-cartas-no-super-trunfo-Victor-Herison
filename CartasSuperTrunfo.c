#include <stdio.h> 


int main() {
    //declarando variaveis
    char estado1, estado2;
    char cidade1[20], cidade2[20];
    char codigo1[3], codigo2[3];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontos_turisticos1, pontos_turisticos2;
    
    printf("------ Cartas Super Trunfo ------\n");
    printf("------! Cadastrar primeira carta !------\n");

    printf("\nInsira o nome do estado: ");
    scanf(" %c", &estado1); //guardando o nome do estado A-H

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade1); //guardando o nome da cidade

    printf("Insira o codigo da cidade: ");
    scanf("%s", codigo1); //guardando o codigo da cidade

    printf("Insira a população da cidade: ");
    scanf("%d", &populacao1); //guardando a população da cidade

    printf("Insira a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &pontos_turisticos1); //guardando os pontos turisticos da cidade

    printf("Insira a área da cidade (metros quadrado): ");
    scanf("%f", &area1); //guardando a area da cidade

    printf("Insira o PIB da cidade: ");
    scanf("%f", &PIB1); //guardando o PIB da cidade


    //repetindo o processo para a segunda carta
    printf("\n------! Cadastrar segunda carta !------\n");

    printf("Insira o nome do estado: ");
    scanf(" %c", &estado2);

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Insira o codigo da cidade: ");
    scanf("%s", codigo2); 

    printf("Insira a população da cidade: ");
    scanf("%d", &populacao2); 

    printf("Insira a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &pontos_turisticos2);

    printf("Insira a área da cidade (metros quadrado): ");
    scanf("%f", &area2); 

    printf("Insira o PIB da cidade: ");
    scanf("%f", &PIB2); 

    //mostrando carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c \n",estado1);
    printf("Cidade: %s \n",cidade1);
    printf("Codigo: %c-%s \n",estado1, codigo1);
    printf("Área (metros quadrado): %2.f \n",area1);
    printf("População: %i \n",populacao1);
    printf("PIB: %2.f \n",PIB1);
    printf("Quantidade de pontos turisticos: %i \n",pontos_turisticos1);

    //mostrando carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c \n",estado2);
    printf("Cidade: %s \n",cidade2);
    printf("Codigo: %c-%s \n",estado2, codigo2);
    printf("Área (metros quadrado): %2.f \n",area1);
    printf("População: %d \n",populacao2);
    printf("PIB: %2.f \n",PIB2);
    printf("Quantidade de pontos turisticos: %d \n",pontos_turisticos2);

    return 0;
}
