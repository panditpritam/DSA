#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * 2; i <= n; i += p)
            {
                prime[i] = false;
            }
        }
    }
    for (int p = 2; p <= n; p++)
    {
        if (prime[p])
        {
            cout << p << " ";
        }
    }
}
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << "Following are the prime numbers between 0 & " << n << " >>> " << endl;
    cout << "0 1 ";
    SieveOfEratosthenes(n);

    return 0;
}