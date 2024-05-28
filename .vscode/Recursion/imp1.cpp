#include <bits/stdc++.h>
using namespace ::std;

int solvethis(vector<int> &v , int t){

int count =0;
if (t == 0)
{
    return 0;
}
if (t <0)
{
    return INT_MAX;
}

int mini = INT_MAX;
for (int i = 0; i < v.size(); i++)
{
    int ans = solvethis(v , t -v[i]);
    if (ans != INT_MAX)
    {
        // ++count;
        mini = min(mini , ans+1);
    }
}

return mini;



    
}

int main(){

vector<int>v{1,2,3,4,5,6};
int target = 3;

cout<<solvethis(v,target);

}