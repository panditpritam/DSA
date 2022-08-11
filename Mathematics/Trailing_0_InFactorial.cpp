#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number you want to know the trailing zeroes of the factorial of this number : ";
    cin >> n;
    int count = 0;
    for (int i = 5; i <= n; i = i * 5)
    {
        count = count + (n / i);
    }

    cout << "The trailing zeroes of the factorial of " << n << " is " << count;

    return 0;
}