#include <iostream>
using namespace std;
int main()
{
    int a = 7;
    int i;
    cin >> i;
    int mask = 1 << i;

    if (a & mask == 1)
    {
        cout << "The " << i << "th number is : 1.";
    }
    else if (a & mask == 0)
    {
        cout << "The " << i << "th number is : 0.";
    }
    return 0;
}