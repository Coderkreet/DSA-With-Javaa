#include <bits/stdc++.h>
using namespace ::std;

static bool mycom(string a , string b){
    string t1 = a+b;
    string t2 = b+a;
    return t1 > t2;
}

void LongNumber(vector<int>v){
vector<string>s;

for(auto n : v){
s.push_back(to_string(n));

}

sort(s.begin() , s.end() , mycom);

string ans ="";

for(auto n : s){
    ans += n;
}
cout<<ans;
}


int main(){

vector<int>v{1,12};

LongNumber(v);

}