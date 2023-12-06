#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//Defino o tamanho da agenda
#define tamanhoAgenda 100 // 100 contatos

int main()
{
    setlocale(LC_ALL, "");
    
    int i, cont=0; //
    char tel[tamanhoAgenda][15]; //o vetor vai receber 100
    char nomes[tamanhoAgenda][50];
    int opcao = 0; //escolha do usuario

    printf("=========== AGENDA ============\n");

    do
    {
        // Menu de opções
        printf("Escolha uma opção:\n");
        printf("1 - Adicionar contato\n");
        printf("2 - Mostrar contatos\n");
        printf("3 - Encerrar\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        fflush(stdin);

        switch (opcao)
        {
        case 1:
        
         if (cont < tamanhoAgenda) //enquanto não utrapassar o limite da agenda vai inserir contato
         {
            
            printf("Digite o Nome:\n");
            gets(nomes[cont]);
               
            printf("Digite o telefone:\n");
            gets(tel[cont]);
        
            system("cls || clear");

            printf("===============================\n");
            printf("Contato adicionado com sucesso!\n");
            printf("===============================\n");
            
            cont++; //a cada contato inserido o cont vai acescentar mais 1 espaço no vetor
            
         }
         
    
            break;
        case 2:
            for (i = 0; i < cont; i++) // vai imprimir todos os Contatos
            {
                printf("Nome: %s\n", nomes[i]);
                printf("Telefone: %s\n", tel[i]);
        
            }
            break;

        case 3:
            printf("Encerrando o programa....\n");  // encerra
            break;

        case 4:

            printf("Opção invalida!!\n"); // caso o usuario digite alguma oura opção
            break;
        }
    } while (opcao <= 2);

    return 0;
}
