#include <iostream>
using namespace std;
void TowerofHanoi(int n, char source, char destination, char helper)
{
    if (n == 0)
    {
        return;
    }

    TowerofHanoi(n - 1, source, helper, destination);
    cout << "Move from " << source << " to " << destination << endl;
    TowerofHanoi(n - 1, helper, destination, source);
}
int main()
{
    TowerofHanoi(3, 'A', 'C', 'B');

    return 0;
}