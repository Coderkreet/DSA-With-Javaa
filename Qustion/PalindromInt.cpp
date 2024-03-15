#include <bits/stdc++.h>
using namespace ::std;

bool PlindromeInt(int num){
int firstDigit = 0; 
int Number = num; 

while (num)
{
int lastdigit = num%10;
firstDigit = firstDigit *10 +lastdigit;


num = num/10;
}


if (firstDigit == Number)
{
    return true;
}else
{
    return false;
}




}

int main(){
int num = 1141;
PlindromeInt(num);
if(PlindromeInt(num)){

    cout<<"is palindrome"<<endl;
}
else
{
    cout<<"not palindrome"<<endl;
}


}