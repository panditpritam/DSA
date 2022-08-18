#include <iostream>
using namespace std;
void reverse(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    string RestOfString = s.substr(1);
    reverse(RestOfString);
    cout << s[0] << " ";
}
int main()
{
    string s = "Pritam";
    cout << "Your String is : " << s << endl;
    cout << "The Reverse of Your String is : ";
    reverse(s);
    return 0;
}