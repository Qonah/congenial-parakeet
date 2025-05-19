#include <stdio.h>


int sum_diag1(int a[3][3]) // главная диагональ
{
    int sum = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(i == j) 
            {
                sum += a[i][j];
            }
        }
    }
    return sum;
}

int sum_diag2 (int a[3][3]) // побочная диагональ
{
    int sum = 0;
    for(int i = 0, j = 2; i < 3; i++, j--)
    {
        sum += a[i][j];
    }
    return sum;
}

int sum_row1(int x[3][3], int row1) // строки 
{
    int sum = 0;
    for(int j = 0, i = row1; j < 3; j++)
    {
        sum += x[row1][j]; 
    }
    return sum;
}

int sum_col(int x[3][3], int col)
{
    int sum = 0;
    int j = col;
    for(int i = 0; i < 3; i++)
    {
        sum += x[i][j];
    }
    return sum;
}

int main ()
{
    int x[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
    int row0 = 0;
    int row1 = 1;
    int row2 = 2;
    int col = 0;
    int col1 = 1;
    int col2 = 2;
    int sumd1 = sum_diag1(x); // ok
    int sumd2 = sum_diag2(x); // ok
    int sumr1 = sum_row1(x, row0);
    int sumr2 = sum_row1(x, row1);
    int sumr3 = sum_row1(x, row2);
    int sumc1 = sum_col(x, col);
    int sumc2 = sum_col(x, col1);
    int sumc3 = sum_col(x, col2);
    /*printf("%d ", sumd1);
    printf("%d\n", sumd2);
    printf("%d ", sumr1);
    printf("%d ", sumr2);
    printf("%d\n", sumr3);*/
    if (sumd1 == sumd2 && sumr1 == sumd1 && sumr1 == sumr2 && sumr2 ==sumr3 && sumc1 == sumc2 && sumc2 == sumc3 && sumc3 == sumr1)
    {
        printf("MAGIC\n");
    }else {printf("NO\n");}
    return 0;
}