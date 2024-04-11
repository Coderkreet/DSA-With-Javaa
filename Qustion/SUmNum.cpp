#include <bits/stdc++.h>
using namespace ::std;



void compareTriplets(vector<int> a, vector<int> b) {
int rb= 0;
vector<int> ans;
int al = 0;
int i =0;
while (i<a.size() && i<b.size()) {

if (a[i] < b[i]) {
rb++;
}
else if (a[i] > b[i]) {
al++;
}

i++;
}


ans.push_back(al);
ans.push_back(rb);

for (int i = 0; i < ans.size(); i++)
{
    cout<<ans[i]<<endl;
}

}
int main(){

vector<int>v1{17, 28, 30};
vector<int>v2{99 ,16, 8};

compareTriplets(v1 , v2);


}