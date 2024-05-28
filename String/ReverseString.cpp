#include <bits/stdc++.h>
using namespace ::std;

void revesestr(string n){

int st = 0;
int ed = n.length()-1;
while (st<= ed)
{
    swap(n[st] , n[ed]);
    st++;
    ed--;
}
cout<<n;
}
int main(){
string name = "Kreet is a good boy";
revesestr(name);
}