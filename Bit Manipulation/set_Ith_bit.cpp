#include <iostream>
using namespace std;
int main()
{
    int a = 154;
    int i;
    cin >> i;
    int mask = (1 << i);

    int result = (a | mask);
    cout << result << endl;
    return 0;
}