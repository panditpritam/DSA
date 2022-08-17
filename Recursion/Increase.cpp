#include <iostream>
using namespace std;
void increase(int n)
{
    if (n == 0)
    {
        return;
    }
    increase(n - 1);
    cout << n << endl;
}
int main()
{
    int n;
    cin >> n;
    increase(n);
    return 0;
}