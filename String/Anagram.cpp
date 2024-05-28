#include <bits/stdc++.h>
using namespace ::std;


void Anagram(string s1 , string s2){

sort(s1.begin() , s1.end());
sort(s2.begin() , s2.end());

for (int i = 0; i < s1.length()&& i< s2.length(); i++)
{
    if (s1[i] != s2[i])
    {
        cout<<"False"<<endl;
        return;
    }
    

}
cout<<"True"<<endl;
}
int main(){

string s1 = "rat";
string s2 = "car";

Anagram(s1 , s2);
}