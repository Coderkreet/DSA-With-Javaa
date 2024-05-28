#include <bits/stdc++.h>
#include <cctype>
using namespace ::std;

void reverseLatter(string s ){
    int ed = s.length()-1;
    int st = 0;

    while (st<=ed)
    {

    
         if (s[st] >= 33 && s[st] <= 47 || s[st] >= 58 && s[st] <= 64)
        {
            st++;
        }
         if (s[ed] >= 33 && s[ed] <= 47 || s[ed] >= 58 && s[ed] <= 64)
        {
            ed--;
        }
        else if(s[st] >= 'a' && s[st] <= 'z' || s[st] >= 'A' && s[st] <= 'Z' || s[ed] >= 'a' && s[ed] <= 'z' || s[ed] >= 'A' && s[ed] <= 'Z')
        {
           swap(s[st] , s[ed]);
                 st++;
                  ed--;
        }
    }
    
cout<<s;


}

int main(){

string s = "a-bC-dEf-ghIj";

reverseLatter(s);
}