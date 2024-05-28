#include <bits/stdc++.h>
using namespace ::std;


bool isPalindroe(string s){
int st = 0;
int ed = s.length()-1;

// cout<<ed<<endl;
if (st == ed)
{
    return true;
}


while (st<=ed)
{
    if (s[st] != s[ed])
    {
        return false;
    }
    st++;
    ed--;
    
}

return true;


}
void palindromicCount(string s ){

vector<string>stor;
int count =0;

for (int i = 0; i < s.length(); i++)
{
    for (int j = i; j < s.length(); j++)
    {
        string out ;
        for (int k = i; k <=j; k++)
        {
            out += s[k];
        }
            stor.push_back(out);   
    }
}


for (int i = 0; i < stor.size(); i++)
{
    string s = stor[i];

    if(isPalindroe(s))
    {
        count++;
    }    
}

cout<<count<<endl;



}

int main(){
string s = "noon";

palindromicCount(s);
}