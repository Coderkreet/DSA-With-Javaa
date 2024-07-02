#include <bits/stdc++.h>
using namespace ::std;
class student{
int marks ;
int age ;
int cls ;


public:

student (){
  marks = 0;
  age = 0;
  cls = 0;
}
 
void setmarks(int m){
marks = m;
}
void setage(int m){
age = m;
}
void setcls(int m){
cls = m;
}



void getmarks(){
cout<<"marks is "<<marks;
}


};



int main(){

student s;

// s.setmarks(12);
s.getmarks();

}