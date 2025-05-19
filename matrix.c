#include <stdio.h>

#define P1 4

#if P1 ==  0

int main ()
{
    /*
    int a[3][4] = {
    {1, 2, 3, 4},       // a[0][0], a[0][1], a[0][2], a[0][3] 
    {11, 12, 13, 14},   // a[1][0], a[1][1], a[1][2], a[1][3]
    {21, 22, 23, 24}    // a[2][0], a[2][1], a[2][2], a[2][3]
    };*/

    int a[3][4];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {//чтение чисел в массив
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {//печать чисел
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    int ara [][]; // так нельзя ошибка


    return 0;
}

#elif P1 == 1

int main ()
{
    int m[3][3];
    int sum = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &m[i][j]);
            sum = sum + m[i][j]; //summing all elements of 2d array (9.2) 
        }
    }
    printf("%d", sum);

    return 0;
}

#elif P1 == 2

int sum_row(int a[3][3], int irow)
{
    int sum = 0; // Инициализация переменной sum
    for(int i = 0; i < 3; i++)
    {
        sum += a[irow][i];//сумма элементов определенной строки
    }
    return sum;
}

int main ()
{
    int a[3][3];
    int irow;

    // Ввод номера строки
    scanf("%d", &irow);

    // Проверка на выход за границы массива
    if (irow < 0 || irow >= 3) {
        printf("Некорректный номер строки\n");
        return 1;
    }

    // Ввод элементов массива
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
           scanf("%d", &a[i][j]);     
        }
    }

    // Вычисление суммы и вывод результата
    int sum = sum_row(a, irow);
    printf("%d", sum);

    return 0;
}

#elif P1 == 3 

int sum_col(int a[3][3], int icol);

int main ()
{
    int icol = 2;
    int a[3][3];

    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
        scanf("%d", &a[i][j]);
        }
    }
    int sum = sum_col(a,icol);
    printf("%d", sum);
    return 0;
}

int sum_col(int a[3][3], int icol)
{
    int sum = 0;
    for(int i = 0; i < 3; i++)
    {
        sum += a[i][icol]; //сумма элементов определнного столбца

    }
    return sum;
}

#elif P1 == 4

#define ROWS 3 
#define COLUMNS 3

int sum_dig(int [ROWS][COLUMNS]);

int main ()
{
    int m[ROWS][COLUMNS];
    int i;
    int j;
    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLUMNS; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    int sumDiag = sum_dig(m);

    printf("%d", sumDiag);
    return 0;
}

int sum_dig(int m[ROWS][COLUMNS])
{
    int sum = 0;
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLUMNS; j++)
        {
            if( i == j)
            {
                sum += m[i][j];
            }else{continue;}
        }
    }
    return sum;
}


#elif P1 == 5
int sum_diag2 (int a[3][3]) //
{
    int sum = 0;
    for(int i = 0, j = 2; i < 3; i++, j--) // необычно
    {
        sum += a[i][j];
    }
    return sum;
}
#endif