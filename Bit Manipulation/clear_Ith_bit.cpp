#include <iostream>
using namespace std;
int main()
{
    int a = 154;
    int i;
    cout << "Enter a number You want to clear : ";
    cin >> i;
    int mask = ~(1 << i);

    int result = (mask & a);
    cout << endl
         << "ith Bit Set Number is : " << result << endl;
    return 0;
}