#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        a.push_back(i);
    }
    cout << a.capacity() << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    return 0;
}