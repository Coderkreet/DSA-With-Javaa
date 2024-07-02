#include <bits/stdc++.h>
using namespace ::std;
class Animal{
int a=1;
int b=3;

public:

void sun(){
    cout<< a+b;
}
void sun(int a){
    cout<< this->a+b+a;
}


};


int main(){
Animal * a = new Animal();

 a->sun(10);


}