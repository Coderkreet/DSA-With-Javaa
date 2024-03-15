#include <bits/stdc++.h>
using namespace ::std;
void NumberTODigit(int n){
int  num = 0;

for (int i = 1; i <=n; i++)
{
    cout<<"Enter" <<i<<"th digit "<<endl;
    int digit;
    cin>>digit;

    num = num *10 + digit;
}

cout<<num<<endl;
}

int main(){

int numofDigit ;
cin>>numofDigit;


NumberTODigit(numofDigit);

}