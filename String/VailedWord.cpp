#include <bits/stdc++.h>
#include <cctype>
using namespace ::std;

bool is_Vovel(char s){
if(s == 'a' || s == 'e'||s == 'i'||s == 'o'||s == 'u' ||
s == 'A' || s == 'E'||s == 'I' || s == 'O'||s == 'U'){
    return true;
}
else{
    return false;
}
}

bool reverseLatter(string s ){
if(s.length() < 3){
   
    return false;
}

for(auto n : s){

    if ( !(isalpha(n)) ||  !(n >= '0' && n <= '9'))
    {

       return false;
    }
    
}

int vcount = 0;
for(auto n : s){
    if (is_Vovel(n))
{
  vcount++;
}
}

int Ccount =0;
for(auto n : s){
    if (!(is_Vovel(n) && isalpha(n)))
{
  Ccount++;
}
}

if (Ccount ==0 && vcount ==0)
{
 return false; 
}

return true;

}

int main(){

string s = "234Adas";


if (reverseLatter(s))
{
    cout<<"True"<<endl;
}
else{
    cout<<"False"<<endl;
}


}