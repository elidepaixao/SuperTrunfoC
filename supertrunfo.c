#include <stdio.h>

int main (){
   
    //Carta 01
    char estado [] = "B";
    char codigo [] = "B01";
    char cidade [] = "Salvador";
    int populacao = 2564204;
    float area = 692.9;
    float pib = 73500.00;
    int pontosTuristicos = 20;
    int densidade = populacao / area;
    float pibPerCapita = pib / populacao;

    printf("Carta 1: \n Estado: %s; \n Codigo: %s; \n Cidade: %s; \n Populacao: %i; \n " 
    "Area: %f km2; \n PIB: %f bilhoes de reais; \n Pontos Turisticos: %i; \n Densidade "
    "Populacional: %i hab/km2; \n Pib Per Capita: %f reais. \n",estado, codigo, cidade, populacao, 
    area, pib, pontosTuristicos, densidade, pibPerCapita);

    //Carta 02

    char estado2 [] = "A";
    char codigo2 [] = "A01";
    char cidade2 [] = "Aracaju";
    int populacao2 = 630932;
    float area2 = 182.16;
    float pib2 = 27364.00;
    int pontosTuristicos2 = 32;
    int densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;



    printf("Carta 2: \n Estado: %s; \n Codigo: %s; \n Cidade: %s; \n Populacao: %i; \n " 
    "Area: %f km2; \n PIB: %f bilhoes de reais; \n Pontos Turisticos: %i; \n Densidade "
    "Populacional: %i hab/km2; \n Pib Per Capita: %f reais. \n" ,estado2, codigo2, cidade2, populacao2, 
    area2, pib2, pontosTuristicos2, densidade2, pibPerCapita2);

}