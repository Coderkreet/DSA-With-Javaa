#include <bits/stdc++.h>
using namespace ::std;

vector<int> PrintWave(vector<vector<int>>& v){
int m = v.size();
int n = v[0].size();
vector<int>ans;
int totalele = m*n;

int stratRow = 0;
int endRow = n-1;
int endCol = m-1;
int stratCol = 0;
  
int count =0;

while (count < totalele)
{
    
    // starting row
    for (int i = stratCol; i <= endCol ; i++)
    {
       
        ans.push_back(v[stratRow][i]);
        count++;
    }
    stratRow++;
    // ending colomn
    for (int i = stratRow; i <= endRow ; i++)
    {
      
         ans.push_back(v[i][endCol]);
           count++;
    }
    endCol--;
    // ending row

    for (int i = endCol; i >=stratCol ; i--)
    {
   
        ans.push_back(v[endRow][i]);
  count++;
    }
    
    endRow--;

    // ending col

    for (int i = endRow; i >=stratRow ; i--)
    {
        ans.push_back(v[i][stratCol]);
        count++;
    }
    stratCol++;
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