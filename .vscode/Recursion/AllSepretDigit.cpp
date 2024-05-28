#include <bits/stdc++.h>
using namespace ::std;

void Sepratedigit(int n){
if (n <=0)
{
    return;
}


Sepratedigit(n/10);

int dig = n%10;
cout<<dig<<"  ";

}


int main(){

int n = 123;

Sepratedigit(n);
}