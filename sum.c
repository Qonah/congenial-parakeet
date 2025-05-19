#include <stdio.h>

void sum(int rows, int cols, int a[rows][cols], int b[rows][cols], int c[rows][cols])
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}

int main ()
{
    int n,m;
    scanf("%d %d", &n, &m);
    if(n > 10 || m > 10)
    {
        printf("Incorrect");
        return 1;
    }
    int a[n][m];
    int b[n][m];
    int c[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n");

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    sum(n, m, a, b, c);

    return 0;
}