#include <bits/stdc++.h>
using namespace ::std;

void RemoveElement(vector<int>v , int val ){
vector<int>ans;

for (int i = 0; i < v.size(); i++)
{
 if(v[i] != val){
    ans.push_back(v[i]);
 }
}

for (int i = 0; i < ans.size(); i++)
{
   v[i] = ans[i];
}

for (int i = 0; i < ans.size(); i++)
{
    cout<<v[i]<<endl;
}

}
int main(){
vector<int>v{0,1,2,2,3,0,4,2};
int val = 2;
RemoveElement(v ,val);
}