#include <iostream>
#include <math.h>

int main()
{
    const int n = 3, m = 4;
    int A[n][m] = { {3, 2, 4, 9 }, {7, 3, 10, 3}, {5, 4, 6, 1} };
    int rez = 1;
    int min = 9999;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            if (A[j][i] < min)
            {
                min = A[j][i];
            }
        rez += min;
        min = 9999;
    }
    printf("rez = %d", rez);
}