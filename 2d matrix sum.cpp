#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,m;
    cout<<"enter number of rows and columns"<<endl;
    cin>>n>>m;
    int arr[n][m];
    cout<<"enter the elements of the matrix"<<endl;
    int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            temp+=arr[i][j];
            }

            }
            cout<<"the sum of the matrix is"<<temp;

    return 0;
}
