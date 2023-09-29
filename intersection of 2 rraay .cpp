#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n1, n2;

    // Input size of the first vector (a)
    cout << "Enter the size of vector a: ";
    cin >> n1;

    // Input elements of vector a
    vector<int> a(n1);
    cout << "Enter " << n1 << " elements for vector a: ";
    for (int i = 0; i < n1; i++) {
        cin >> a[i];
    }

    // Input size of the second vector (b)
    cout << "Enter the size of vector b: ";
    cin >> n2;

    // Input elements of vector b
    vector<int> b(n2);
    cout << "Enter " << n2 << " elements for vector b: ";
    for (int i = 0; i < n2; i++) {
        cin >> b[i];
    }

    vector<int> ans;

    // Sort vectors a and b
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0;

    // Find common elements between sorted vectors a and b
    while (i < n1 && j < n2) {
        if (a[i] == b[j]) {
            ans.push_back(a[i]);
            i++;
            j++;
        } else if (a[i] < b[j]) {
            i++;
        } else {
            j++;
        }
    }

    // Print the common elements
    cout << "Common elements: ";
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
