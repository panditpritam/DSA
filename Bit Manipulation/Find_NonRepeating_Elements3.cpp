#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int singleNumber(int arr[], int n)
{
    unordered_set<int> s(arr, arr + n);
    int arr_sum = accumulate(arr, arr + n, 0);
    int set_sum = accumulate(s.begin(), s.end(), 0);

    return (3 * set_sum - arr_sum) / 2;
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

    cout << "The Element with single occurrence is : " << singleNumber(arr, n);
    return 0;
}