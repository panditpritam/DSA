#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int n = 34;
    cout << n << " in binary is : " << bitset<32>(n) << endl;
    if ((n & 1) == 0)
    {
        cout << "The number is even.";
    }
    else
    {
        cout << "The number is odd.";
    }

    return 0;
}