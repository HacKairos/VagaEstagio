#include <stdio.h>
#include <string.h>

void contador(int *Entrada)
{
    int error = -1, cont = 13;
    for (int i = 0; i < 13; i++)
    {
        if (Entrada[i] == 0)
        {
            cont--;
        }
        else
        {
            if (Entrada[i] < 0)
            {
                error++;
            }
        }
    }
    if (error >= 0)
    {
        printf("erro\n");
    }
    else
    {
        printf("%d\n", cont);
    }
}

int main()
{
    int C[13], E[13], U[13], P[13];
    char entrada[157];
    for (int i = 0; i < 13; i++)
    {
        C[i] = 1;
        E[i] = 1;
        U[i] = 1;
        P[i] = 1;
    }
    scanf(" %[^\n]s", entrada);
    for (int i = 0; i < strlen(entrada); i = i + 3)
    {
        int x = i + 1, y = i + 2;
        if ((entrada[i] - '0') == 0)
        {
            if (entrada[y] == 'C')
            {
                C[(entrada[x] - '0') - 1]--;
            }
            else
            {
                if (entrada[y] == 'E')
                {
                    E[(entrada[x] - '0') - 1]--;
                }
                else
                {
                    if (entrada[y] == 'U')
                    {
                        U[(entrada[x] - '0') - 1]--;
                    }
                    else
                    {
                        if (entrada[y] == 'P')
                        {
                            P[(entrada[x] - '0') - 1]--;
                        }
                    }
                }
            }
        }
        else
        {
            int t = 10 + (entrada[x] - '0');

            if (entrada[y] == 'C')
            {
                C[t - 1]--;
            }
            else
            {
                if (entrada[y] == 'E')
                {
                    E[t - 1]--;
                }
                else
                {
                    if (entrada[y] == 'U')
                    {
                        U[t - 1]--;
                    }
                    else
                    {
                        if (entrada[y] == 'P')
                        {
                            P[t - 1]--;
                        }
                    }
                }
            }
        }
    }

    contador(C);
    contador(E);
    contador(U);
    contador(P);

    return 0;
}