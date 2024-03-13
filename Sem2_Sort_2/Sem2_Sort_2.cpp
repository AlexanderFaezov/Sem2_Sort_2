#include <iostream>
using namespace std;

void qsortRecursive(int* mas, int size)
{
    int i = 0;
    int j = size - 1;

    int mid = mas[size / 2];

    do {
        while (mas[i] < mid)
        {
            i++;
        }
        while (mas[j] > mid)
        {
            j--;
        }
        if (i <= j)
        {
            int tmp = mas[i];
            mas[i] = mas[j];
            mas[j] = tmp;

            i++;
            j--;
        }
    } while (i <= j);
    if (j > 0)
    {
        qsortRecursive(mas, j + 1);
    }
    if (i < size)
    {
        qsortRecursive(&mas[i], size - i);
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
    int i, n;
    int* A = new int[100];
    cout << "Размер массива: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cout << i << " элемент: ";
        cin >> A[i];
    }
    qsortRecursive(A, n + 1);
    cout << "Упорядоченный массив: ";
    for (int i = 1; i <= n; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}
