#include <bits/stdc++.h>
using namespace ::std;
int* solve(){
int p = 3;
int *ptr = &p;

cout<<*ptr<<endl;
cout<<ptr<<endl;
return ptr;

}

int main(){

int* n = solve();
cout<<*n<<endl;
}