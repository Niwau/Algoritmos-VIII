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

        //Esse código printará os números que não são 0 na quantidade de vezes da rodada.
        for(int quantidadeInteiros = 1; quantidadeInteiros <= rodadaAtual; quantidadeInteiros++){
            printf("%d ", inteiro--);
        }

        //Esse código printará os números que são 0 até cobrir a linha.
        for(int quantidadeZeros = n - 1; quantidadeZeros >= rodadaAtual; quantidadeZeros-- ){
            printf("0 ");
        }

        //Esse código atualizará a variável auxiliar para o número da próxima rodada.
        inteiro = rodadaAtual + 1;

        printf("\n");
    }

}
