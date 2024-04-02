#include <bits/stdc++.h>
using namespace ::std;
void PrintWave(vector<vector<int>>& v){
int m = v.size();
int n = v[0].size();

for (int stcol = m-1; stcol >= 0; stcol--)
{
    if (stcol %2 == 0)
    {
        // even
for (int i = 0; i < n; i++)
{
    cout<<v[i][stcol]<<" ";
}
    }
    else
    {
        for (int i = n-1; i >= 0 ; i--)
        {
            
       cout<<v[i][stcol]<<" ";

        }
        
    }   
}
}

int main(){


vector<vector<int>>v {
{1,2,3},
{4,5,6},
{7,8,9}
};

PrintWave(v);

}