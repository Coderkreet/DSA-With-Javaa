#include <bits/stdc++.h>
using namespace ::std;

void increase_count(vector<int>v){
long long count = 0;

vector<int>ans;

for (int i = 0; i < v.size(); i++)
{
    count *= 10;
    count += v[i]; 
}
count++;

while(count)
{
    int last = count%10;
    ans.push_back(last);
    count = count/10;
}
reverse(ans.begin() , ans.end());

for (int i = 0; i < ans.size(); i++)
{
    cout<<ans[i]<<" ";
}



}

// Input: digits = [1,2,3]
// Output: [1,2,4]
int main(){

vector<int>v {9};

increase_count(v);
}