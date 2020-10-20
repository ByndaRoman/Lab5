#include <iostream>

int main()
{
    setlocale(LC_CTYPE, "RU");
    const int n = 10, Low = -100, High = 100;
    int A[n];

    for (int i = 0; i < n; i++)
    {
        A[i] = Low + rand() % High;
    }

    for (int i = 0; i < n; i++)
    {
        printf("A[%d] = ", A[i], "\t");
    }

    int plus = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > 0)
        {
            plus++;
        }
    }
    printf("К-сть додатных ел. %d", plus);

    int dob = 1;
    int min_id = 0;
    int min = 9999;

    for (int i = 0; i < n; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
            min_id = i;
        }
    }

    for (int i = 0; i < min_id; i++)
    {
        dob *= A[i];
    }

    printf("Добуток = %d", dob);
}