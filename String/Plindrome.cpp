#include <bits/stdc++.h>
using namespace ::std;

void ispalindrome(string s ){
int st = 0;
int ed = s.length()-1;
while (st<=ed)
{
    if(s[st] != s[ed]){
        cout<<"Not_palindrome"<<endl;
        return;
    }
    st++;
    ed--;
}

cout<<"Plindrome"<<endl;

}


int main(){
string s = "oyo oyo";

ispalindrome(s);
}