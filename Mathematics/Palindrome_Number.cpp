#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int result = 0;
    int num = n;
    do
    {
        int last_digit = num % 10;
        result = (result * 10) + last_digit;
        num = num / 10;
    } while (num != 0);

    if (result == n)
    {
        cout << "The Number You've entered is a Palindrome." << endl;
    }
    else
    {
        cout << "The Number You've entered is not a Palindrome." << endl;
    }

    return 0;
}