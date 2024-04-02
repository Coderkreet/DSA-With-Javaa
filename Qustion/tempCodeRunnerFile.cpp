#include <bits/stdc++.h>
using namespace ::std;


vector<int>PrintWave(vector<vector<int>>v){
int m = v.size();
int n = v[0].size();

int stRow = 0;
int edCol = n-1;
int edRow = m-1;
int stCol = 0;

int total = m*n;
int count = 0;

vector<int> ans;

while (count < total)
{
//   Starting Row

for (int i = stCol; i <= edCol; i++)
{
    ans.push_back(v[stRow][i]);
    count++;
}
stRow++;

// endcol 

for (int i = stRow; i <= edRow; i++)
{
    ans.push_back(v[i][edCol]);
    count++;
}
edCol--;

// EndRow
for (int i = edCol; i >= stCol; i--)
{
     ans.push_back(v[edRow][i]);
    count++;
}
edRow--;

// end Col

for (int i = edRow; i >= stRow; i--)
{
 ans.push_back(v[i][stCol]);
    count++;
}
stCol++;
}
return ans;
}

int main(){
vector<vector<int>>v {
{1,2,3},
{4,5,6},
{7,8,9}
};
vector<int> ans = PrintWave(v);

for (int i = 0; i < ans.size(); i++)
{
    cout<<ans[i]<<endl;
}
}