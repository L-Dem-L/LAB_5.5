﻿#include <iostream>
#include <cmath>

using namespace std;

int C(int n, int k, int level, int& depth)
{
    if (level > depth)
        depth = level;

    // вивід значення поточного рівня рекурсії
    cout << " level = " << level << endl;

    if (k == n or k == 0)
        return 1;
    else
        return C(n - 1, k - 1, level + 1, depth) + C(n - 1, k, level + 1, depth);
}

double b(const int n, int level, int& depth)
{
    if (level > depth)
        depth = level;

    // вивід значення поточного рівня рекурсії
    cout << " level = " << level << endl;

    double p = 0;
    for (int k = 0; k <= n * 1. / 2; k++)
        p += C(n - k, k, level + 1, depth);
    return p;
}

int f(int n, int level, int& depth)
{
    if (level > depth)
        depth = level;

    // вивід значення поточного рівня рекурсії
    cout << " level = " << level << endl;

    if (n == 0 or n == 1)
        return 1;
    else
        return f(n - 1, level + 1, depth) + f(n - 2, level + 1, depth);
}

int main()
{
    int n;
    int k;
    cout << "n = ";
    cin >> n;
    cout << "k = ";
    cin >> k;
    cout << endl;

    int depth = 0; // початкове значення глибини
    int level = 1; // початкове значення рівня рекурсії

    cout << "C(n, k) = " << C(n, k, level, depth) << endl;
    cout << "depth = " << depth << endl;

    depth = 0; // обнуляємо глибину для інших функцій
    level = 1; // обнуляємо рівень рекурсії для інших функцій

    cout << "b(n) = " << b(n, level, depth) << endl;
    cout << "depth = " << depth << endl;

    depth = 0; // обнуляємо глибину для інших функцій
    level = 1; // обнуляємо рівень рекурсії для інших функцій

    cout << "f(n) = " << f(n, level, depth) << endl;
    cout << "depth = " << depth << endl;

    return 0;
}
