#include <stdio.h>

int main(){

// Declaração de dados
/* Nomeclatura dos tipos de dados:

       char    listadecompras ;
        ^          ^
  Especificador  Variável       

int // Declara uma variável inteira
 
float // Declara uma variável de ponto flutuante

char[] // Declara uma variável de sequencia caracteres (String)

char // Declara uma variável de unica caractere */

//Data da Carta 1:
char estado1;
char codigo1[10];
char nome1[20];
float populacao1;
float area1;
float PIB1;
int Turismo1;
float Densidade1;
float PIBcapita1;
float SuperPoder1;
float Dnesidadeinversa1;
int opcao;

//Data da Carta 2:
char estado2;
char codigo2[10];
char nome2[20];
float populacao2;
float area2;
float PIB2;
int Turismo2;
float Densidade2;
float PIBcapita2;
float SuperPoder2;
float Dnesidadeinversa2;
int resudp;

// Entrada de Dados
printf("**** Bem vindo ao Super Trunfo! **** \n");
printf("Antes de começar. Digite o nome da primeira carta:\n");
scanf("%[^\n]s", &nome1[0]);

printf("Digite o nome da segunda carta:\n");
scanf(" %[^\n]s", &nome2[0]);

printf("- Selecione o que vai usar para a comparação -\n");

printf("1. população\n");
printf("2. Area\n");
printf("3. PIB\n");
printf("4. Numero de pontos turisticos\n");
printf("5. PIB Per Capita\n");
printf("6. Densidade populacional (O menor valor vence)\n");
printf("7. Todos os Atributos (+ Super Poder)\n");
printf("Escolha: ");
scanf("%d", &opcao);

switch (opcao)
{
case 1:
printf("Insira a população da 1º Carta:\n");
scanf(" %f", &populacao1);


printf("Insira a população da 2º Carta:\n");
scanf(" %f", &populacao2); 

if (populacao1 > populacao2)
{
   printf("População da Carta 1: %.6f - População da Carta 2: %.6f -\n - Carta 1 venceu! (1)\n", populacao1, populacao2);
   
}
else if (populacao1 < populacao2)
{
   printf("População da Carta 2: %.6f - População da Carta 1: %.6f -\n - Carta 2 venceu! (0)\n", populacao2, populacao1);
}
else
{
   printf("Houve um Empate!\n");
}
return 0;
break;

case 2:
printf("Insira a área 1º Carta em kilometros quadrados:\n");
scanf(" %f", &area1);

printf("Insira a área 2º Carta em kilometros quadrados:\n");
scanf(" %f", &area2);

if (area1 > area2)
{
   printf("Area da Carta 1: %.6f - Area da Carta 2: %.6f -\n - Carta 1 venceu! (1)\n", area1, area2);
}
else if (area1 < area2)
{
   printf("Area da Carta 2: %.6f - Area da Carta 1: %.6f -\n - Carta 2 venceu! (0)\n", area2, area1);
}
else
{
   printf("Houve um Empate!\n");
}
return 0;
break;   

case 3:
printf("Insira o PIB da 1º Carta:\n");
scanf(" %f", &PIB1);

printf("Insira o PIB da 2º Carta:\n");
scanf(" %f", &PIB2);

if (PIB1> PIB2)
{
   printf("PIB da Carta 1: %.3f - PIB da Carta 2: %.6f -\n - Carta 1 venceu! (1)\n", PIB1, PIB2);
}
else if (PIB1 < PIB2)
{
   printf("PIB da Carta 2: %.3f - PIB da Carta 1: %.3f -\n - Carta 2 venceu! (0)\n", PIB2, PIB1);
}
else
{
   printf("Houve um Empate!\n");
}
return 0;
break;

case 4:
printf("Insira o número de pontos turisticos da 1º Carta:\n");
scanf(" %d", &Turismo1);

printf("Insira o número de pontos turisticos da 2º Carta:\n");
scanf(" %d", &Turismo2);

if (Turismo1 > Turismo2)
{
   printf("Pontos Turisticos da Carta 1: %d - Pontos Turisticos da Carta 2: %d -\n - Carta 1 venceu! (1)\n", Turismo1, Turismo2);
}
else if (Turismo1 < Turismo2)
{
   printf("Pontos Turisticos da Carta 2: %d - Pontos Turisticos da Carta 1: %d -\n - Carta 2 venceu! (0)\n", Turismo2, Turismo1);
}
else
{
   printf("Houve um Empate!\n");
}
return 0;
break;

case 5:

printf("Insira o PIB da 1º Carta:\n");
scanf(" %f", &PIB1);

printf("Insira o PIB da 2º Carta:\n");
scanf(" %f", &PIB2);

printf("Insira a população da 1º Carta:\n");
scanf(" %f", &populacao1);

printf("Insira a população da 2º Carta:\n");
scanf(" %f", &populacao2);

PIBcapita1 = PIB1 / populacao1;
PIBcapita2 = PIB2 / populacao2;

if (PIBcapita1 > PIBcapita2)
{
   printf("PIB Per Capita da Carta 1: %f - PIB Per Capita da Carta 2: %f -\n - Carta 1 venceu! (1)\n", PIBcapita1, PIBcapita2);
}
else if (PIBcapita1 < PIBcapita2)
{
   printf("PIB Per Capita da Carta 2: %f - PIB Per Capita da Carta 1: %f -\n - Carta 2 venceu! (1)\n", PIBcapita2, PIBcapita1);
}
else
{
   printf("Houve um Empate!\n");
}
return 0;
break;

case 6:
printf("Insira a população da 1º Carta:\n");
scanf(" %f", &populacao1);


printf("Insira a população da 2º Carta:\n");
scanf(" %f", &populacao2); 

printf("Insira a área 1º Carta em kilometros quadrados:\n");
scanf(" %f", &area1);

printf("Insira a área 2º Carta em kilometros quadrados:\n");
scanf(" %f", &area2);

Densidade1 = (populacao1 / area1);
Densidade2 = (populacao2 / area2);

Dnesidadeinversa1 = 1 / Densidade1;
Dnesidadeinversa2 = 1 / Densidade2;

if (Dnesidadeinversa1 < Dnesidadeinversa2)
{
   printf("Densidade populacional da Carta 1: %.6f - Densidade populacional da Carta 2: %.6f -\n - Carta 1 venceu! (1)\n", Dnesidadeinversa1, Dnesidadeinversa2);
   
}
else if (Dnesidadeinversa2 < Dnesidadeinversa1)
{
   printf("Densidade populacional da Carta 2: %.6f - Densidade populacional da Carta 1: %.6f -\n - Carta 2 venceu! (0)\n", Dnesidadeinversa2, Dnesidadeinversa1);
}
else if (Dnesidadeinversa1 == Dnesidadeinversa2)
{
   printf("Houve um Empate!\n");
}
return 0;
break;

case 7:

printf("Aqui você ira inserir os valores das duas carta em sequencia para receber uma comparação completa com todos os abributos possiveis.\n");
printf("Incluindo um Atributo exclusivo: O Super Poder! - A soma de todos os abributos da carta -\n");

printf("Insira uma letra de 'A' a 'h':\n");
scanf(" %c", &estado1); 
                        
printf("Insira um código de 1 caractére e 2 números (ex: A01):\n");
scanf(" %s", &codigo1);

printf("Insira a população:\n");
scanf(" %f", &populacao1); // OBS: Para evitar que ponteiro indesejavelmente pule uma das mensagens, é nescessário espaçar o especificador.
                           // Exemplo: (" %c") áo envés de ("%c")

printf("Insira a área em kilometros quadrados:\n");
scanf(" %f", &area1);

printf("Insira o PIB:\n");
scanf(" %f", &PIB1);

printf("Insira o número de pontos turisticos:\n");
scanf(" %d", &Turismo1);

printf("Agora insira as informações da segunda carta.\n");

printf("Insira uma letra de 'A' a 'h':\n");
scanf(" %c", &estado2);

printf("Insira um código de 1 caractére e 2 números (ex: B01):\n");
scanf(" %s", &codigo2);

printf("Insira a população:\n");
scanf(" %f", &populacao2);

printf("Insira a área em kilometros quadrados:\n");
scanf(" %f", &area2);

printf("Insira o PIB:\n");
scanf(" %f", &PIB2);

printf("Insira o número de pontos turisticos:\n");
scanf(" %d", &Turismo2);
break;

default:
printf("Opção invalida - Reinicie o programa.\n");
return 0;
break;

}

//Operação matematica
Densidade1 = (populacao1 / area1);
Densidade2 = (populacao2 / area2);
PIBcapita1 = (PIB1 / populacao1);
PIBcapita2 = (PIB2 / populacao2);

Dnesidadeinversa1 = 1 / Densidade1;
Dnesidadeinversa2 = 1 / Densidade2;

SuperPoder1 = (populacao1 + area1 + PIB1 + Turismo1 + PIBcapita1 + Dnesidadeinversa1);
SuperPoder2 = (populacao2 + area2 + PIB2 + Turismo2 + PIBcapita2 + Dnesidadeinversa2);

// Saida de dados (Output)

//Output da primeira carta
printf("\n*** Carta 1 ***\n");
printf("Estado: %c \n", estado1);
printf("Codigo: %s \n", codigo1);
printf("Nome: %s \n", nome1);
printf("População: %.6f \n", populacao1);
printf("Area: %.6f km² \n", area1);
printf("Produto Interno Bruto (PIB): %.3f Bilhões \n", PIB1);
printf("Numero de Pontos Turisticos: %d \n", Turismo1);
printf("Densidade populacional: %.2f hab/km² \n", Densidade1);
printf("PIB per capita: %.6f reais \n", PIBcapita1);
printf("Super Poder: %f \n", SuperPoder1);

//Output da segunda carta
printf("\n*** Carta 2***\n");
printf("Estado: %c \n", estado2);
printf("Codigo: %s \n", codigo2);
printf("Nome: %s \n", nome2);
printf("População: %.6f \n", populacao2);
printf("Area: %.6f km² \n", area2);
printf("Produto Interno Bruto (PIB): %.3f Bilhões \n", PIB2);
printf("Numero de Pontos Turisticos: %d \n", Turismo2);
printf("Densidade populacional: %.2f hab/km² \n", Densidade2);
printf("PIB per capita: %.6f reais \n", PIBcapita2);
printf("Super Poder: %f \n", SuperPoder2);

//Output da Comparação
printf("\n***Comparação***\n");
if (populacao1 > populacao2)
{
   printf("População: %.6f - Carta 1 venceu! (1)\n", populacao1);
}
else if (populacao1 < populacao2)
{
   printf("População: %.6f - Carta 2 venceu! (0)\n", populacao2);
}
else
{
   printf("Houve um Empate! Carta 1: %.6f - Carta 2: %.6f\n", populacao1, populacao2);
}

if (area1 > area2)
{
   printf("Area: %.6f - Carta 1 venceu! (1)\n", area1);
}
else if (area1 < area2)
{
   printf("Area: %.6f - Carta 2 venceu! (0)\n", area2);
}
else
{
   printf("Houve um Empate! Carta 1: %.6f - Carta 2: %.6f\n", area1, area2);
}

if (PIB1 > PIB2)
{
   printf("PIB:  %.3f - Carta 1 venceu! (1)\n", PIB1);
}
else if (PIB1 < PIB2)
{
   printf("PIB:  %.3f - Carta 2 venceu! (0)\n", PIB2);
}
else
{
   printf("Houve um Empate! Carta 1: %.3f - Carta 2: %.3f\n", PIB1, PIB2);
}

if (Turismo1 > Turismo2)
{
   printf("Pontos Turisticos: %d - Carta 1 venceu! (1)\n", Turismo1);
}
else if (Turismo1 < Turismo2)
{
   printf("Pontos Turisticos: %d - Carta 2 venceu! (0)\n", Turismo2);
}
else
{
   printf("Houve um Empate! Carta 1: %d - Carta 2: %.d\n", PIB1, PIB2);
}

if (Dnesidadeinversa1 < Dnesidadeinversa2)
{
   printf("Densidade populacional: %.4f - Carta 2 venceu! (0)\n", Densidade2);
}
else
{
   printf("Densidade populacional: %.4f - Carta 1 venceu! (1)\n", Densidade1);
}

if (PIBcapita1 > PIBcapita2)
{
   printf("PIB per capita: %.6f - Carta 1 venceu! (1)\n", PIBcapita1);
}
else
{
   printf("PIB per capita: %.6f - Carta 2 venceu! (0)\n", PIBcapita2);
}

if (SuperPoder1 > SuperPoder2)
{
   printf("Super Poder: %f - Carta 1 venceu! (1)\n", SuperPoder1);
}
else
{
   printf("Super Poder: %f - Carta 2 venceu! (0)\n", SuperPoder2);
}

return 0;

}