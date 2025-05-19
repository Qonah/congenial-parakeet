#include <stdio.h>

void number_mult(int k, int rows, int cols, int a[][cols])
{
    int sum = 0;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            a[i][j] = k * a[i][j];
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main ()
{
    int n,m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int k = 0;
    scanf("%d", &k);
    number_mult(k, n, m, a);
    return 0;
}


