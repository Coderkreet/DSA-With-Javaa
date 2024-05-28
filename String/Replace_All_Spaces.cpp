#include <bits/stdc++.h>
using namespace ::std;

void replaceallspaces(string s ){
for (int i = 0; i < s.length(); i++)
{
    if (s[i] == ' ')
    {
        s[i] = 0;
    }   
}
for (int i = 0; i < s.length(); i++)
{
    cout<<s[i];
}
}
int main(){
string s = "krunal is a good boy";
replaceallspaces(s);
}