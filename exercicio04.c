#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int nota;
    int contador = 0;
    float mediaPar;
    int somaPar=0;
    float mediaImpar;
    int somaImpar=0;
    int soma = 0;
    int par = 0;
    int impar = 0;
    float media;
    do
    {
        printf("Digite a nota:\n");
        scanf("%d", &nota);
        if (nota > 0)
        {
            contador++;
            soma += nota;
             if (nota % 2 == 0)
            {
                par++;
                somaPar += nota;
            }
            else
            {
                impar++;
                somaImpar += nota;
            }
        }
    } while (nota != 0);

    media = soma / (float)contador;
    mediaPar = somaPar /(float) par;
    mediaImpar = somaImpar / (float)impar;

    printf("Quantidade de numeros pares %d \n", par);
    printf("Quantidade de numeros �mpares %d \n", impar);
    printf("A m�dia dos n�meros pares �: %.2f \n", mediaPar);
    printf("A m�dia dos n�meros �mpares �: %.2f\n", mediaImpar);
    printf("A m�dia geral �: %.2f\n", media);

    return 0;
}