#include <bits/stdc++.h>
using namespace ::std;

void CopaireString(string s1 , string s2){
    for (int i = 0; i < s1.length() || i<s2.length(); i++)
    {
        if (s1[i] == ' ' || s2[i] == ' ')
        {
            continue;
        }
        
        if (s1[i]+32 == s2[i] || s1[i]-32 == s2[i] || s1[i] == s2[i] || s2[i]+32 == s1[i] || s2[i]-32 == s1[i]);

        else
        {
            cout<<"Not_same";
            return;
        }
    }
    cout<<"both are same"<<endl;
}
int main(){
string s = "kreet";
string s1 = "KrEet";

CopaireString(s , s1);
}