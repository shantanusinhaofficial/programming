#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << "Enter x: ";
    int x;
    cin >> x;

    int occurrence = 0;
    for (int ele : v)
    {
        if (ele == x)
        {
            occurrence++;
        }
    }

    cout << "Occurrences of x: " << occurrence << endl;
    return 0;
}
