#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double P, S;
    int k, n;

    P = 1;
    k = 1;
    while (k <= 25)
    {
        S = 0;
        n = k;
        while (n <= pow(k, 2))
        {
            S += 1 / n;
            n++;

        }
        P *= (1 + (S));
        k++;
    }
    cout << P << endl;

    P = 1;
    k = 1;

    do {
        S = 0;
        n = 1;
        do {
            S += 1 / n;
            n++;
        } while (n <= k);
        P *= (1 + (S));
        k++;
    } while (k <= 25);
    cout << P << endl;

    P = 1;
    for (k = 1; k <= 25; k++)
    {
        S = 0;
        for (n = 1; n <= k; n++)
        {
            S += 1 / n;
        }
        P *= (1 + (S));
    }
    cout << P << endl;

    P = 1;
    for (k = 25; k >= 1; k--)
    {
        S = 0;
        for (n = k; n >= 1; n--)
        {
            S += 1 / n;
        }
        P *= (1 + (S));
    }
    cout << P << endl;

    return 0;

}