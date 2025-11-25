#include <stdio.h>

int main (){
   
    //Carta 01
    char estado [] = "B";
    char codigo [] = "B01";
    char cidade [] = "Salvador";
    int populacao = 2564204;
    float area = 692.9;
    float pib = 73.5; // em bilhões de reais
    int pontosTuristicos = 20;
    float densidade = (float)populacao / area;
    float densidadeInvertida = 1.0f / densidade;
    float pibPerCapita = (pib * 1000000000.0f) / (float)populacao; // PIB em reais dividido pela população
    float superPoder = (float)populacao + area + pib + densidade + densidadeInvertida + pibPerCapita;

    printf("Carta 1: \n Estado: %s; \n Codigo: %s; \n Cidade: %s; \n Populacao: %d; \n " 
    "Area: %.2f km2; \n PIB: %.1f bilhoes de reais; \n Pontos Turisticos: %d; \n Densidade "
    "Populacional: %.2f hab/km2; \n Pib Per Capita: %.2f reais; \n Super Poder: %.2f. \n",
    estado, codigo, cidade, populacao, area, pib, pontosTuristicos, densidade, pibPerCapita, superPoder);

    //Carta 02
    char estado2 [] = "A";
    char codigo2 [] = "A01";
    char cidade2 [] = "Aracaju";
    int populacao2 = 630932;
    float area2 = 182.16;
    float pib2 = 16.5; // em bilhões de reais
    int pontosTuristicos2 = 32;
    float densidade2 = (float)populacao2 / area2;
    float densidadeInvertida2 = 1.0f / densidade2;
    float pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2; // PIB em reais dividido pela população
    float superPoder2 = (float)populacao2 + area2 + pib2 + densidade2 + densidadeInvertida2 + pibPerCapita2;

    printf("Carta 2: \n Estado: %s; \n Codigo: %s; \n Cidade: %s; \n Populacao: %d; \n " 
    "Area: %.2f km2; \n PIB: %.1f bilhoes de reais; \n Pontos Turisticos: %d; \n Densidade "
    "Populacional: %.2f hab/km2; \n Pib Per Capita: %.2f reais; \n Super Poder: %.2f. \n",
    estado2, codigo2, cidade2, populacao2, area2, pib2, pontosTuristicos2, densidade2, pibPerCapita2, superPoder2);

    return 0;
}

/*Cast explícito: (float)populacao para garantir divisão em ponto flutuante
PIB Per Capita corrigido: Multipliquei o PIB por 1 bilhão para converter para reais antes da divisão
Formatação melhorada:
%.2f para 2 casas decimais na maioria dos valores
%.1f para o PIB (1 casa decimal)
%d em vez de %i para inteiros (mais comum)
Literal float: 1.0f em vez de 1 para garantir operação em float*/