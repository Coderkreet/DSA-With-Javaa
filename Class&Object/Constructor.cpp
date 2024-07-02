#include <bits/stdc++.h>
using namespace ::std;
class Animal{
string Speaking = "barking";

public:

Animal(){
    cout<<"animal weak up"<<endl;
}
Animal(int a ){
 
    cout<<a<<" animal weak up"<<endl;
}
Animal(int a , int b ){
 
    cout<<a<<"animal weak up "<<this->Speaking<<" "<<b<<endl;
}

void speak(){
cout<<"dog is  "<<Speaking<<endl;
}


};

int main(){
Animal* a = new Animal(2, 3);
a->speak();

}