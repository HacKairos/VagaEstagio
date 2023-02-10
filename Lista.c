#include <stdio.h>
#include <stdlib.h>

int contador(int Left, int Right, int *L, int C)
{
    if (Left == Right || Left > Right)
        return C;
    else if (L[Left] != L[Right])
        C++;

    return contador(Left+1, Right-1, L, C);
}

int main(int argc, char const *argv[])
{
    int N;
    scanf("%d", &N);

    int *L = malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &L[i]);
    }

    printf("%d\n", contador(0, N - 1, L, 0));

    return 0;
}
