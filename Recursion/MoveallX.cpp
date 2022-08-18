#include <iostream>
using namespace std;
string RemoveallX(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = RemoveallX(s.substr(1));
    if (ch == 'x')
    {
        return ans + ch;
    }
    return ch + ans;
}
int main()
{
    cout << RemoveallX("axbxcdxxxfghx");

    return 0;
}