# Super Trunfo C

Um programa desenvolvido em linguagem C que simula o famoso jogo de cartas Super Trunfo, permitindo a comparação entre duas cartas com base em diferentes atributos urbanos e demográficos.

## Descrição do Projeto

O Super Trunfo C é uma aplicação console que permite ao usuário inserir dados de duas cartas representando cidades brasileiras e realizar comparações automáticas entre seus atributos. O programa calcula métricas derivadas e determina qual carta vence em cada categoria.

## Funcionalidades

### Entrada de Dados
O programa coleta as seguintes informações para cada carta:
- Estado (sigla)
- Código da carta
- Nome da cidade
- População (unsigned long int)
- Área em km² (float)
- PIB em bilhões de reais (float)
- Número de pontos turísticos (int)

### Cálculos Automáticos
- **Densidade Populacional**: População dividida pela área
- **PIB per Capita**: PIB convertido para reais dividido pela população
- **Densidade Populacional Invertida**: 1 dividido pela densidade populacional
- **Super Poder**: Soma de todos os atributos numéricos (população + área + PIB + pontos turísticos + PIB per capita + densidade invertida)

### Sistema de Comparação
O programa compara as cartas em sete categorias:
- População (maior vence)
- Área (maior vence)
- PIB (maior vence)
- Pontos Turísticos (maior vence)
- Densidade Populacional (menor vence)
- PIB per Capita (maior vence)
- Super Poder (maior vence)

### Saída dos Resultados
Para cada atributo, o programa exibe:
- Qual carta venceu
- Valor binário da comparação (1 = Carta 1 vence, 0 = Carta 2 vence)

## Características Técnicas

### Estruturas de Dados
- Uso de `unsigned long int` para população (valores não negativos e grandes)
- Variáveis `float` para cálculos de precisão decimal
- Arrays de caracteres para strings

### Operações Matemáticas
- Conversões explícitas de tipo para garantir precisão nos cálculos
- Uso exclusivo de operadores relacionais para comparações
- Implementação sem estruturas condicionais (if/else)

### Boas Práticas Implementadas
- Cast explícito para conversões de tipo
- Formatação adequada de saída com especificadores de precisão
- Uso de literais float (1.0f) para operações em ponto flutuante
- Variáveis dedicadas para armazenar resultados de comparação

## Estrutura do Código

```c
// Declaração das cartas
char estado[] = "...";
unsigned long int populacao = ...;
float area = ...;
// ... outros atributos

// Cálculos derivados
float densidade = (float)populacao / area;
float pibPerCapita = (pib * 1000000000.0f) / (float)populacao;
float superPoder = (float)populacao + area + pib + /* ... */;

// Comparações usando apenas operadores relacionais
int comparacaoPopulacao = populacao > populacao2;
// ... outras comparações
```

## Exemplo de Execução

```
Carta 1: 
Estado: B; 
Codigo: B01; 
Cidade: Salvador; 
População: 2564204; 
Area: 692.90 km2; 
PIB: 73.5 bilhões de reais; 
Super Poder: 2596610.85.

/*Comparação de cartas

População: Carta 1 venceu (1)
Área: Carta 1 venceu (1)
PIB: Carta 1 venceu (1)
Densidade Populacional: Carta 2 venceu (0)
Super Poder: Carta 1 venceu (1)

*/
```

## Compilação e Execução

```bash
gcc -o supertrunfo main.c
./supertrunfo
```

## Objetivos Pedagógicos

Este projeto foi desenvolvido para demonstrar:
- Manipulação de diferentes tipos de dados em C
- Conversões de tipo e precisão numérica
- Uso de operadores relacionais
- Formatação de saída com printf
- Estruturação de código sem uso de condicionais
- Cálculos matemáticos aplicados a dados reais

## Créditos Acadêmicos

**Disciplina**: Introdução à Programação de Computadores  
**Professor**: Sergio Cardoso  
**Universidade**: Estácio de Sá  
**Curso**: Engenharia de Software

---

Este projeto representa uma aplicação prática dos conceitos fundamentais de programação em C, combinando lógica matemática, manipulação de dados e formatação de saída em um contexto lúdico e educativo.