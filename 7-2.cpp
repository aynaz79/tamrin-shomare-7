#include <bits/stdc++.h>
using namespace std;

int nThFibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return nThFibonacci(n - 1) + nThFibonacci(n - 2);
}

int main()
{
    int n = 1000;
    for (int i = 0; i < n; ++i)
    {
        int number = nThFibonacci(i);
        if (number < 1000)
        {
            cout << number << '\n';
        }
        else
        {
            break;
        }
    }
    return 0;
}