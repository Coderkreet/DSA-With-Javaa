#include <bits/stdc++.h>
using namespace ::std;

 void FirstAndLastDigit(int n){
int count = 0;
int first = n%10;

while (n>10)
{
  n = n/10;
}
int last = n;

int distance = (last*last)  -  (first * first);
cout<<last*last <<" ----- "<< first*first<<endl;
cout<<"diffrence of element "<<distance<<endl;



 }

int main(){

int n = 135;

FirstAndLastDigit(n);

}