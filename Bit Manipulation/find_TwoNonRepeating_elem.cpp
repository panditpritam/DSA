#include <iostream>
using namespace std;
void Find_Two_Num(int arr[], int n)
{
    int ans = 0;
    for (int j = 0; j < n; j++)
    {
        ans = ans ^ arr[j];
    }
    int temp = ans;
    for (int i = 0; i < n; i++)
    {
        int bit = arr[i] & 1;
        if (bit == 1)
        {
            temp = temp ^ arr[i];
        }
    }
    int a = temp;
    int b = ans ^ a;
    cout << a << " " << b << endl;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Find_Two_Num(arr, n);
    return 0;
}