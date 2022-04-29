#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;
    int inteiro = 1;

    printf("Insira um numero: ");
    scanf("%d", &n);

    for(int rodadaAtual = 1; rodadaAtual <= n; rodadaAtual++){

        //Esse c�digo printar� os n�meros que n�o s�o 0 na quantidade de vezes da rodada.
        for(int quantidadeInteiros = 1; quantidadeInteiros <= rodadaAtual; quantidadeInteiros++){
            printf("%d ", inteiro--);
        }

        //Esse c�digo printar� os n�meros que s�o 0 at� cobrir a linha.
        for(int quantidadeZeros = n - 1; quantidadeZeros >= rodadaAtual; quantidadeZeros-- ){
            printf("0 ");
        }

        //Esse c�digo atualizar� a vari�vel auxiliar para o n�mero da pr�xima rodada.
        inteiro = rodadaAtual + 1;

        printf("\n");
    }

}
