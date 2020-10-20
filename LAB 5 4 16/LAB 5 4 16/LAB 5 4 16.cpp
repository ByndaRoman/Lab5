#include <iostream>

int main()
{
    setlocale(LC_CTYPE, "RU");
    const int n = 5, m = 6, Low = -100, High = 100;
    int A[n][m];

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            A[j][i] = Low + rand() % High;
        }
    }

    int temp;
    for (int i = 0; i < m; i++)
    {
        for(int t = 0; t < n; t++)
        { 
            for (int j = 0; j < n; j++)
            {
                if (A[j][i] < A[j + 1][i])
                {
                    temp = A[j][i];
                    A[j][i] = A[j + 1][i];
                    A[j + 1][i] = temp;
                }
            }
        }
    }

    

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            printf(" %d ",A[j][i]);
        }
        printf("\n");
    }

    
}
