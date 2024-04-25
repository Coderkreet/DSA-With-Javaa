#include <bits/stdc++.h>
using namespace ::std;

void UpperscaseLatter(string s){
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            continue;
        }
        
        s[i] -=32; 

    }

cout<<s;
    
}
int main(){
string s = "kreet is a good boy";
UpperscaseLatter(s);
}