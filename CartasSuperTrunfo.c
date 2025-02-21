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

//Data da Carta 2:
char estado2;
char codigo2[10];
char nome2[20];
float populacao2;
float area2;
float PIB2;
int Turismo2;

// Entrada de Dados
/*  Nomeclatura dos especificadores:
   %s => para sequencia de caracteres
   %d => para numeros inteiros tradicionais
   %f => para numeros flutuantes
   
   %.2f => exibe o valor como um número de ponto flutuante com duas casas decimais *
   %2.f => arredonda o valor flutuante *

   %e => para numeros flutuantes na conotação cientifica
   %c => para caracteres unicas
*/

printf("Bem vindo ao Super Trunfo! \n Insira as seguintes informações para a primeira carta.\n");

printf("Insira uma letra de 'A' a 'h':\n");
scanf(" %c", &estado1); // Scanea e armazena as informações dadas pelo usuario.
                        
printf("Insira um código de 1 caractére e 2 números (ex: A01):\n");
scanf(" %s", &codigo1);

printf("Insira o nome da cidade brasileiro:\n");
scanf(" %[^\n]s", &nome1[0]); // %[^\n]s foi ultilizado para posibilitar a leitura da linha inteira.
                              //Isso permite que o compilador leia espaços entres os nomes

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
printf("Entre com qualquer digito para continuar...");
getchar(); // getchar foi ultilizada para ler qualquer comando inserido

printf("Insira uma letra de 'A' a 'h':\n");
scanf(" %c", &estado2);

printf("Insira um código de 1 caractére e 2 números (ex: B01):\n");
scanf(" %s", &codigo2);

printf("Insira o nome da cidade brasileiro:\n");
scanf(" %[^\n]s", &nome2[0]);

printf("Insira a população:\n");
scanf(" %f", &populacao2);

printf("Insira a área em kilometros quadrados:\n");
scanf(" %f", &area2);

printf("Insira o PIB:\n");
scanf(" %f", &PIB2);

printf("Insira o número de pontos turisticos:\n");
scanf(" %d", &Turismo2);

// Saida de dados (Output)

//Output da primeira carta
printf("\nCarta 1\n");
printf("Estado: %c \n", estado1);
printf("Codigo: %s \n", codigo1);
printf("Nome: %s \n", nome1);
printf("População: %.4f \n", populacao1);
printf("Area: %.4f km² \n", area1);
printf("Produto Interno Bruto (PIB): %.3f Bilhões \n", PIB1);
printf("Numero de Pontos Turisticos: %d \n", Turismo1);

//Output da segunda carta
printf("\nCarta 2\n");
printf("Estado: %c \n", estado2);
printf("Codigo: %s \n", codigo2);
printf("Nome: %s \n", nome2);
printf("População: %.4f \n", populacao2);
printf("Area: %.4f km² \n", area2);
printf("Produto Interno Bruto (PIB): %.3f Bilhões \n", PIB2);
printf("Numero de Pontos Turisticos: %d \n", Turismo2);

return 0;

}
