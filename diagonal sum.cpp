#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    int matrix[n][m];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int diagonal_sum = 0;
    int anti_diagonal_sum = 0;
    for (int i = 0; i < n; i++)
    {
        diagonal_sum += matrix[i][i];
        anti_diagonal_sum += matrix[i][m - i - 1];
    }

    cout << "Diagonal sum: " << diagonal_sum << endl;
    cout << "Anti-diagonal sum: " << anti_diagonal_sum << endl;
    int total = diagonal_sum + anti_diagonal_sum;
    cout << total;
    return 0;
}
