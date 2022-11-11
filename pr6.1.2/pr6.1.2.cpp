#include <iostream>
#include <iomanip>
using namespace std;

int Init(int p[], const int n)
{
    for (int i = 0; i < n; i++)
        p[i] = 15 + rand() % 79;
    return 0;
}

void Print(int p[], const int n)
{
    cout << "{";
    for (int i = 0; i < n; i++)
    {
        cout << p[i];
        if (i != n - 1)
            cout << ", ";
    }
    cout << "}" << endl;
}

int SumElement(const int* const p, const int n)
{
    int S = 0;
    for (int i = 0; i < n; i++)
        if (p[i] % 13 != 0 && p[i] % 2 != 0)
            return SumElement(p, n);
    return S;
}

int CountElement(const int* const p, const int n)
{
    int C = 0;
    for (int i = 0; i < n; i++)
        if (p[i] % 13 != 0 && p[i] % 2 != 0)
            return CountElement(p, n);
    return C;
}

void ReplaceElement(int p[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        if (p[i] % 13 != 0 && p[i] % 2 != 0)
            return ReplaceElement(p, n);
    }
}

int main()
{
    srand(time(0));

    const int n = 25;
    int p[n];

    Init(p, n);
    Print(p, n);
    cout << "Array sum by condition = " << SumElement(p, n) << endl;
    cout << "Count element by condition = " << CountElement(p, n) << endl;
    ReplaceElement(p, n);
    Print(p, n);

    return 0;
}
