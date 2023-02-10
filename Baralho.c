#include <stdio.h>
#include <string.h>

void contador(int *Entrada) // função para contar a quantidade de cartas que faltam em cada naipe
{
    int error = -1, cont = 13;   // adiciono a variavel que printa o erro e uma com a quantidade maxima de cartas
    for (int i = 0; i < 13; i++) // verifico em todas as posições do array o valor dentro de suas casas
    {
        if (Entrada[i] == 0)
        {
            cont--; // quando o valor é 0 significa que ele apareceu dentro da sting entao o contador diminui pois esta carta nao esta faltando
        }
        else
        {
            if (Entrada[i] < 0)
            {
                error++; // quando o valor é menor q 0 significa que ela pareceu mais de uma vez dentro da string
            }
        }
    }
    if (error >= 0)
    {
        printf("erro\n"); // printa erro quando ela repete dentro da string
    }
    else
    {
        printf("%d\n", cont); // printa as quantidade que falta em determinado naipe
    }
}

int main()
{
    int C[13], E[13], U[13], P[13]; // criação das variaveis
    char entrada[157];
    for (int i = 0; i < 13; i++) // preencho todos os arrays de inteiro com o numero 1
    {
        C[i] = 1;
        E[i] = 1;
        U[i] = 1;
        P[i] = 1;
    }
    scanf(" %[^\n]s", entrada);                     // leitura da entrada
    for (int i = 0; i < strlen(entrada); i = i + 3) // Passar por toda string com i sempre pulando 3 casas para ser o primeiro numero de todas as "cartas"
    {
        int x = i + 1, y = i + 2;    // adicono variaveis auxiliares
        if ((entrada[i] - '0') == 0) // Aqui eu comparo a string na posição i com 0 para determinar se a carta é menor que 10
        {
            if (entrada[y] == 'C') // Verifico o naipe da carta
            {
                C[(entrada[x] - '0') - 1]--; // aqui eu diminuo em o numero dentro do array de inteiro no determinado naipe para representar se tem ou nao ou tem mais de 1
            }
            else
            {
                if (entrada[y] == 'E') // Verifico o naipe da carta
                {
                    E[(entrada[x] - '0') - 1]--; // aqui eu diminuo em o numero dentro do array de inteiro no determinado naipe para representar se tem ou nao ou tem mais de 1
                }
                else
                {
                    if (entrada[y] == 'U') // Verifico o naipe da carta
                    {
                        U[(entrada[x] - '0') - 1]--; // aqui eu diminuo em o numero dentro do array de inteiro no determinado naipe para representar se tem ou nao ou tem mais de 1
                    }
                    else
                    {
                        if (entrada[y] == 'P') // Verifico o naipe da carta
                        {
                            P[(entrada[x] - '0') - 1]--; // aqui eu diminuo em o numero dentro do array de inteiro no determinado naipe para representar se tem ou nao ou tem mais de 1
                        }
                    }
                }
            }
        }
        else
        {
            int t = 10 + (entrada[x] - '0'); // Varivel para definir a posição do array de inteiro quando a carta é maior que 1 digito

            if (entrada[y] == 'C') // Verifico o naipe da carta
            {
                C[t - 1]--; // aqui eu diminuo em o numero dentro do array de inteiro no determinado naipe para representar se tem ou nao ou tem mais de 1
            }
            else
            {
                if (entrada[y] == 'E') // Verifico o naipe da carta
                {
                    E[t - 1]--; // aqui eu diminuo em o numero dentro do array de inteiro no determinado naipe para representar se tem ou nao ou tem mais de 1
                }
                else
                {
                    if (entrada[y] == 'U') // Verifico o naipe da carta
                    {
                        U[t - 1]--; // aqui eu diminuo em o numero dentro do array de inteiro no determinado naipe para representar se tem ou nao ou tem mais de 1
                    }
                    else
                    {
                        if (entrada[y] == 'P') // Verifico o naipe da carta
                        {
                            P[t - 1]--; // aqui eu diminuo em o numero dentro do array de inteiro no determinado naipe para representar se tem ou nao ou tem mais de 1
                        }
                    }
                }
            }
        }
    }

    contador(C); // chama a funçao de contagem
    contador(E); // chama a funçao de contagem
    contador(U); // chama a funçao de contagem
    contador(P); // chama a funçao de contagem

    return 0;
}