#include <bits/stdc++.h>
using namespace ::std;
class Sum{
public:
int val;


void operator +(Sum& val1){
cout<<this->val - val1.val;

}

};

int main(){

// Sum * obj1 = new Sum();
// Sum * obj2 = new Sum();
// obj1->val = 12;
// obj2->val = 34;
Sum obj1 , obj2;
obj1.val =12;
obj2.val =12;

obj1+obj2;
}