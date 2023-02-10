#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N;           // defino a variavel que contem o numero q o ogro quer representar.
    scanf("%d", &N); // defino seu valor
    if (N == 0)
    {
        printf("*\n*\n"); // caso a variavel seja 0 printo as duas mãos fechadas e o \n
    }
    else
    {
        if (N <= 5) // caso menor que 5 entro neste laço
        {
            for (int i = 0; i < N; i++)
            {
                printf("I"); // e printo os "dedos" até o final do laço
            }

            printf("\n*\n"); // e printo a outra mão fechada e o \n
        }
        else
        {
            printf("IIIII\n"); // printo os 5 primeiros dedos da mão do ogro
            N = N - 5; //subtraio 5 no valor de N
            for (int i = 0; i < N; i++) // faço um laço ate o novo valor de N para representar os dedos que faltam
            {
                printf("I"); // e printo os "dedos" até o final do laço
            }

            printf("\n"); //printo o \n
        }
    }
    return 0;
}
