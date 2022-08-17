#include <iostream>
using namespace std;
int search(int arr[], int n, int i, int key)
{
    if (arr[i] == n)
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;
    }
    return search(arr, n, i + 1, key);
}
int main()
{
    int arr[] = {4, 2, 4, 2, 7, 8, 2};
    cout << search(arr, 7, 0, 4);
    return 0;
}