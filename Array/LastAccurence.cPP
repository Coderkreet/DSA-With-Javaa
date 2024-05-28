#include <bits/stdc++.h>
using namespace ::std;

void Lastaccurence(vector<char>v ,int n , char t){

if(n == 0){
  return;
}

if (v[n] == t)
{
  cout<<n;
  return;
}


Lastaccurence(v , n-1 , t);


// return ans;
}
void Firstaccurence(vector<char>v ,int n ,int i , char t){

if(i >=  n){
  return;
}

if (v[i] == t)
{
  cout<<i;
  return;
}


Firstaccurence(v , n ,i+1, t);


// return ans;
}


int main(){

vector<char> v{'w','e','r','a','a','w','a','e','a','a','r'};
int n = v.size()-1;
int i =0;

Lastaccurence(v , n,'a');
cout<<endl;
Firstaccurence(v , n, i,'a');

}