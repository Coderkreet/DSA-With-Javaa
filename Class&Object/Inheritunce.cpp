#include <bits/stdc++.h>
using namespace ::std;
class Animal
{
public:
    int age;
    int weight;
public:
   void eat(){
    cout<<"eting"<<endl;
   }
};

class dog : private Animal{
public:

void printAge(){
    this->age = 12;
    cout<<this->age<<endl;
}
};


int main(){

dog d;

d.printAge();


}