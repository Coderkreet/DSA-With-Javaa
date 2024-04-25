#include <bits/stdc++.h>
using namespace ::std;

void removeDuplicate(vector<int>v){
 set<int>s;
vector<int>vr;
for (int i = 0; i < v.size(); i++)
{
    s.insert(v[i]);
}


int in = 0;
for(int i : s){
    v[in] = i;
    in++;
}

for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<endl;
}



}

int main(){
vector<int> v {0,0,1,1,1,2,2,3,3,4};

removeDuplicate(v);
}