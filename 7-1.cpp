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
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << nThFibonacci(n);
    return 0;
}