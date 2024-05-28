#include <bits/stdc++.h>
using namespace ::std;

void isPalindrome(string s ){
int st = 0;
int ed = s.length()-1;
while (st<=ed)
{
    if(s[st] != s[ed]){
        cout<<"Not_Palindrome"<<endl;
        return;
    }
    st++;
    ed--;
    
}
cout<<"Palindrome"<<endl;
}
int main(){
string s = "oyo oyo";

isPalindrome(s);
}