#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
   setlocale(LC_ALL, "");

   /*
   Crie um programa que faça o cadastro de 5 alunos em uma escola, armazenando
   seus dados como: nome, idade e  3 notas  para cada aluno. Ao final, mostre
   todos os dados dos alunos como: nome, idade, as notas e a média. Após calcular
   a média, verifique para cada aluno se este estará
   aprovado (média maior ou igual a 7,0),
   em recuperação (média menor que 7,0 e maior ou igual a 5,0) ou
   reprovado (média menor que 5,0) com base nestes critérios.

   */
   
  // variaveis
    int i, j;
    int tamNotas=3;
    int tamNome=2;
    float soma=0;
    float notas[tamNome][tamNotas];
    char aluno[2][300];
    int idade[tamNome];
    float media[tamNome];
    

// laço nome
    for ( i = 0; i < tamNome; i++)
    {
        printf("Digite o %dº Aluno:\n", i+1);
        gets(aluno[i]);

        printf("Digite a idade:\n");
        scanf("%d", &idade[i]);
        
        // laço notas
        for ( j = 0; j < tamNotas; j++)
        {
            printf("Digite a %dª nota:\n", j+1);
            scanf("%f",&notas[i][j]);
            soma+=notas[i][j];
            system("cls || clear");
        }
        media[i]=soma/tamNotas;
        soma =0;
        
       fflush(stdin); // limpa cache
    }
    system("cls || clear");
    

    //Exibe resultado
    printf("Exibindo notas:\n");

    for ( i = 0; i < tamNome; i++)
    {
        printf(" %s \n", aluno[i]);
        printf("idade: %d anos\n", idade[i]);
        for ( j = 0; j < tamNotas; j++)
        {
         printf(" %dª nota: %.2f\n",j+1, notas[i][j]);

        }
        if (media[i]>=7)
        {
           printf("Está Aprovado!\n");
        }else if (media[i]<7 && media[i]>=5)
        {
         printf("Está em Recuperação\n");
        }
        else
        {
           printf("Está Reprovado\n");
         
        }
        
        
            
        
        
        
    }
   
   return 0;
}