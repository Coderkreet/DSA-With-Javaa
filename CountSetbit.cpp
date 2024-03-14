#include <bits/stdc++.h>
using namespace ::std;

void AllSetBit(int n){

int count = 0;
// while (n>0)
// {
//     if (n%2 == 1)
//     {
//         count++;
//     }
    
// n = n/2;
// }

/* This code snippet is counting the number of set bits (bits with value 1) in the binary
representation of the integer `n`. */
while (n>0)
{
    if (n&1 == 1)
    {
        count++;
    }
    n = n>>1;
    
}


cout<<count<<endl;
}

int main(){

int n = 15;

AllSetBit(n);
}