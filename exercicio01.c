#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "");

   /*Exerc√≠cio 1:
Crie um algoritmo que leia o nome, a idade, o peso e a altura de 5 pessoas, armazenando em vetores.

- Mostre as informa√ß√µes solicitadas de cada pessoa e informe:
A maior altura e a menor altura.
O maior peso e menor peso;
A maior idade e a menor idade.

   */
  int i;
  int qtd = 5;
  int idade[qtd];
  float peso[qtd];
  int altura[qtd];
  char nome[qtd][200];
  int maiorAltura=0;
  int menorAltura=9999;
  float maiorPeso=0;
  float menorPeso=9999;
  int maiorIdade = 0;
  int menorIdade = 9999;
  for ( i = 0; i < qtd; i++)
  {
   printf("Digite o %d∫ nome: \n", i+1);
   gets(nome[i]);
   printf("Digite a idade:\n");
   scanf("%d",&idade[i]);
   printf("Digite o peso:\n");
   scanf("%f",&peso[i]);
   printf("Digite a altura (em centimetros ex:175cm):\n");
   scanf("%d",&altura[i]);

   //idade maior
   if (idade[i] >maiorIdade)
   {
      maiorIdade=idade[i];
   }
   else
   {
      maiorIdade=maiorIdade;
   }
   // idade menor
   if (idade[i]<menorIdade)
   {
      menorIdade=idade[i];
   }
   //peso maior
   maiorPeso= peso[i]>maiorPeso? peso[i]:maiorPeso;
   // menor peso
   if (peso[i]<menorPeso)
   {
     menorPeso=peso[i];
   }
   // maior altura

   maiorAltura= altura[i]>maiorAltura? altura[i]:maiorAltura;
   // menor altura
   if (altura[i]<menorAltura)
   {
     menorAltura=altura[i];
   }
   
   fflush(stdin);


  }
  system("cls || clear");

  for ( i = 0; i < qtd; i++)
  {
   printf("---------------------------\n");
   printf(" %d∫ nome: %s\n", i+1, nome[i]);
   printf("Idade:%d anos\n",idade[i]);
   printf("O peso È: %.2f kg\n", peso[i]);
   printf("A altura È: %d cm\n",altura[i]);
   printf("---------------------------\n");

  }
  printf("--------------------------------\n");
  printf("A maior altura È:%dcm\n",maiorAltura);
  printf("A menor altura È:%dcm\n",menorAltura);
  printf("--------------------------------\n");
  printf("O maior peso È:%.2fkg\n",maiorPeso);
  printf("O menor peso È:%.2fkg\n",menorPeso);
  printf("--------------------------------\n");
  printf("A maior idade È:%d anos\n",maiorIdade);
  printf("A menor idade È:%d anos\n",menorIdade);
  
  

   return 0;
}