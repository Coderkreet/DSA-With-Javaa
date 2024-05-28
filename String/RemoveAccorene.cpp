#include <bits/stdc++.h>
using namespace ::std;

void RemovePart(string s , string part){
int pos = s.find(part);

while (pos != string::npos) 
{
  s.erase(pos , part.length());
  pos = s.find(part);
}

for (int i = 0; i < s.length(); i++)
{
    cout<<s[i];
}
    
}

int main(){
string s = "daabcbaabcbc";
string part = "abc";

RemovePart(s , part);

}