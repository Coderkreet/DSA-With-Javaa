#include <bits/stdc++.h>
using namespace ::std;

vector<int> PrintWave(vector<vector<int>> v)
{
    int startCol = 0;
    int startRow = 0;
    int m = v.size();
    int n = v[0].size();
    int endRow = m - 1;
    int endCol = n - 1;
    vector<int> ans;
    int total = m * n;
    int count = 0;

    while (count < total)
    {
        for (int i = startCol; i <= endCol; i++)
        {

            ans.push_back(v[startRow][i]);
            count++;
        }
        startRow++;
        // endCol

        for (int i =startRow ; i <=  endRow ; i++)
        {
           ans.push_back(v[i][endCol]); 
           count++;
        }
        endCol--;

    // ending row

        for (int i =endCol ; i >=startCol; i--)
        {
           ans.push_back(v[endRow][i]); 
           count++;
        }
        endRow--;
    // ending col

        for (int i =endRow ; i >=startRow; i--)
        {
           ans.push_back(v[i][startCol]); 
           count++;
        }
        startCol++;
    }
    return ans;
}

int main()
{
    vector<vector<int>> v{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    vector<int> ans = PrintWave(v);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}