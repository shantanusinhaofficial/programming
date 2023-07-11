#include <iostream>
using namespace std;

int main()
{
    int n, i, j, sum1 = 0, sum2 = 0;
    cout << "Enter the size of the matrix: ";
    cin >> n;
    int a[n][n];
    cout << "Enter the elements of the matrix: ";
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> a[i][j];

    // finding the sum of the first diagonal
    for (i = 0; i < n; i++)
        sum1 = sum1 + a[i][i];

    // finding the sum of the second diagonal
    for (i = 0; i < n; i++)
        sum2 = sum2 + a[i][n - i - 1];

    cout << "The sum of the first diagonal is: " << sum1 << endl;
    cout << "The sum of the second diagonal is: " << sum2 << endl;

    return 0;
}
