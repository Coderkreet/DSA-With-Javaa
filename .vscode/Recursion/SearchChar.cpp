#include <bits/stdc++.h>
using namespace ::std;

bool Searchele(string& s , char& f ,int& i ){
if ( i >= s.length())
{
 return false;   
}

if (s[i] == f)
{

   return true; 
}


int newi = i+1;
 bool ans = Searchele(s, f , newi);


return ans;
}

int main(){
string str = "kreet";
char f = 'g';
int i =0;
cout<< Searchele(str,f , i);
}