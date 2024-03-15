#include <bits/stdc++.h>
using namespace ::std;
void DigitTOInt(int num){

while (num)
{
    cout<<num%10<<endl;

    num = num/10;
}


}

int main(){
int I = 1234;

DigitTOInt(I);

}