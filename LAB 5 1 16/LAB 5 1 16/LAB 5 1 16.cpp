#include <iostream>
#include <math.h>

int main()
{
    setlocale(LC_CTYPE, "RU");
    const int n = 10;
    printf("Введiть масив");
    int A[n];
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] = ", i + 1);
        scanf_s("%d", &A[i]);
    }

    int plus = 0;
    int minus = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == 0)
        {
            printf("A[%d] = 0", i + 1);
        }
        else if (A[i] < 0)
        {
            minus++;
        }
        else
        {
            plus++;
        }
    }

    printf("\n");
    printf("У матрицi %d додатнiх i %d вiдємних елементiв", plus, minus );
    printf("\t");

    if (plus > minus)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}