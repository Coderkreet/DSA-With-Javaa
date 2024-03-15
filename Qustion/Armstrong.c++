#include <bits/stdc++.h>
using namespace ::std;

bool ArmstrongNumber(int num){
if (num == 153)
{
    cout<<"it is armstrong number "<<endl;
    return true;
}


    int orignal = num;
int number = num;
int count = 0;
int sum = 0;
while (num)
{
count++;
num = num/ 10;
}



while (number)
{
  int digit = number%10;
cout<<digit<<endl;

sum += pow(digit ,count);

cout<<sum<<endl;
number = number/ 10;
}

if (sum ==  orignal)
{
   cout<<"armstrong Number"<<endl;
}
else
{
    cout<<"Not Armstrong number"<<endl;
}

}


int main(){

int N = 54748;
ArmstrongNumber(N);

}