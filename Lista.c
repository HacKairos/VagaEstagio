#include <stdio.h>
#include <stdlib.h>

int contador(int Left, int Right, int *L, int C)
{
    if (Left == Right || Left > Right) //comparo para definir o fim da recursao
        return C;
    else if (L[Left] != L[Right]) //aumento o contador de posições a serem alteradas para se obter um palindromo
        C++;

    return contador(Left+1, Right-1, L, C); //Avanço na recursao
}

int main(int argc, char const *argv[])
{
    int N; //crio a variavel que define a quantidade de numeros dentro do array
    scanf("%d", &N); //leio a variavel N

    int *L = malloc(sizeof(int) * N); //Aloco o espaço na memoria necessario para realizar a operação
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &L[i]); //escaneio todos os inteiros
    }

    printf("%d\n", contador(0, N - 1, L, 0)); // chamo a função que conta a quantidade de posições que devem ser alteradas

    return 0;
}
