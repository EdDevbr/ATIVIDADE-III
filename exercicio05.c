#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TamanhoNota 200 // itens

int main()
{
    setlocale(LC_ALL, "");
    
    int i, cont=0; 
    char produtos[TamanhoNota][200]; 
    float valorProduto[TamanhoNota];
    float totalVendas=0;
    int codigoProd=0;
    
    int opcao = 0; 


    do
    {
        // Menu de op��es
    printf("\t\t=========== MENU PRODUTOS ============\n");
    printf("||   C�DIGO  || === ||         PRODUTO          || === ||   VALOR  ||\n");
    printf("||     1     || === ||     Hot dog simples      || === ||  R$5,00  ||\n");
    printf("||     2     || === ||     Hot dog duplo        || === ||  R$10,00 ||\n");
    printf("||     3     || === ||    Hot dog Ma�aricado    || === ||  R$15,00 ||\n");
    printf("||     4     || === ||    Hot da Casa (X-tudo)  || === ||  R$20,00 ||\n");

        printf("Escolha uma op��o:\n");
        printf("1 - Adicionar produto\n");
        printf("2 - Finalizar pedido\n");
        printf("3 - Encerrar\n");
        printf("Op��o: ");
        scanf("%d", &opcao);
        fflush(stdin);

        switch (opcao)
        {
        case 1:
        
         if (cont < TamanhoNota)
            {
                printf("Digite o c�digo do produto:\n");
                scanf("%d", &codigoProd);

                if (codigoProd >= 1 && codigoProd <= 4)
                {
                    if (codigoProd == 1)
                    {
                        snprintf(produtos[cont], sizeof(produtos[cont]), "Hot dog simples");
                        valorProduto[cont] = 5.00;
                    }
                    else if (codigoProd == 2)
                    {
                        snprintf(produtos[cont], sizeof(produtos[cont]), "Hot dog duplo");
                        valorProduto[cont] = 10.00;
                    }
                    else if (codigoProd == 3)
                    {
                        snprintf(produtos[cont], sizeof(produtos[cont]), "Hot dog Ma�aricado");
                        valorProduto[cont] = 15.00;
                    }
                    else if (codigoProd == 4)
                    {
                        snprintf(produtos[cont], sizeof(produtos[cont]), "Hot da Casa (X-tudo)");
                        valorProduto[cont] = 20.00;
                    }
                    system("cls || clear");

                    printf("===============================\n");
                    printf("Produto adicionado com sucesso!\n");
                    printf("===============================\n");

                    totalVendas += valorProduto[cont];
                    cont++; // a cada produto inserido o cont vai acrescentar mais 1 espa�o no vetor
                }
                else
                {
                    printf("C�digo de produto inv�lido!\n");
                }
            }
            else
            {
                printf("Limite de produtos atingido!\n");
            }

            break;
                
        
            
            cont++; //a cada produto inserido o cont vai acescentar mais 1 espa�o no vetor
            fflush(stdin);
            
         
         
    
            break;
        case 2:
            system("cls || clear");
            printf("\n");
            printf("\n");
            for (i = 0; i < cont; i++)
            {
            printf("\n");
            printf("----------------------------------------\n");
                printf("Produto: %s\n", produtos[i]);
                printf("Valor: %.2f \n", valorProduto[i]);
            printf("----------------------------------------\n");
        
            }
            printf("====================================\n");
            printf("Total a Pagar R$ %.2f\n", totalVendas);
            printf("====================================\n");
            printf("\n");
            printf("\n");
            printf("\n");
            break;

        case 3:
            printf("Encerrando o programa....\n");  // encerra
            break;

        case 4:

            printf("Op��o invalida!!\n"); // caso o usuario digite alguma outra op��o
            break;
        }
    } while (opcao <= 2);

    return 0;
}
