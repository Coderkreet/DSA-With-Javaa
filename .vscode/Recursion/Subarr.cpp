#include <bits/stdc++.h>
using namespace ::std;
void subArr(string s , string  ot , int i , vector<string>& ans ) {
if (i>= s.length())
{
    ans.push_back(ot);
    return;
}
// exclude

subArr(s , ot , i+1 , ans);

// Include

ot.push_back(s[i]);
subArr(s,ot,i+1 , ans);

}


int main(){

string s = "abc";
string output ="";
int i=0 ;
vector<string>ans;


subArr(s , output , i , ans);

for (int i = 0; i < ans.size(); i++)
{
    cout<<ans[i]<<endl;
}

return 0;

}