#include <bits/stdc++.h> 
using namespace std;

vector<int> spiralPathMatrix(vector<vector<int>> matrix, int n, int m) 
{
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();
    int count = 0;
    int total = row * col;
    int startingrow = 0;
    int startingcol = 0;
    int endingrow = row - 1;
    int endingcol = col - 1;

    while(count < total){
        for(int index = startingcol; index <= endingcol; index++)
        {
            ans.push_back(matrix[startingrow][index]);
            count++;
        }
        startingrow++;

        for(int index = startingrow; index <= endingrow; index++)
        {
            ans.push_back(matrix[index][endingcol]);
            count++;
        }
        endingcol--;

        if(startingrow <= endingrow){
            for(int index = endingcol; index >= startingcol; index--)
            {
                ans.push_back(matrix[endingrow][index]);
                count++;
            }
            endingrow--;
        }

        if(startingcol <= endingcol){
            for(int index = endingrow; index >= startingrow; index--)
            {
                ans.push_back(matrix[index][startingcol]);
                count++;
            }
            startingcol++;
        }
    }
    return ans;
}
