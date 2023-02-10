#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N;
    scanf("%d", &N);
    if (N == 0)
    {
        printf("*\n*\n");
    }
    else
    {
        if (N <= 5)
        {
            for (int i = 0; i < N; i++)
            {
                printf("I");
            }

            printf("\n*\n");
        }
        else
        {
            printf("IIIII\n");
            N = N - 5;
            for (int i = 0; i < N; i++)
            {
                printf("I");
            }

            printf("\n");
        }
    }
    return 0;
}
