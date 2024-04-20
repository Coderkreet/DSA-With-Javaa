#include <bits/stdc++.h>
using namespace ::std;

void remdupli(string s){
int st = 0;
int st1 = 1;
string ans;

set<char>set;

for (char ch : s)
{
    set.insert(ch);
}

for(char ch : set){
   ans +=ch;
}

cout<<ans;

}

int main(){
string s = "AABBBCDDD";

remdupli(s);
}