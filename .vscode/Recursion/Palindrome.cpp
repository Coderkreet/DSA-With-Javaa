#include <bits/stdc++.h>
using namespace ::std;

bool isPalindrome(string& s , int st , int ed){
if(st >= ed){
    return true;
}


if (s[st] != s[ed])
{
    return false;
}

return isPalindrome(s , st+1, ed-1);

}


bool  checkPalindrome(string s){
int st = 0;
int ed = s.length()-1;

return isPalindrome( s,st , ed );
     
}


int main(){

string s = "KreeK";

cout<<checkPalindrome(s);
}