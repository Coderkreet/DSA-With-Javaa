#include <bits/stdc++.h>
using namespace ::std;

 int reverse(int sum) {
           int ans = 0;
        int dig = 0;
        
        bool negative = false; 
        if (sum < 0) {
            negative = true;
           sum = -sum;
        }
        while (sum > 0) {
            dig = sum % 10;
            ans = ans * 10 + dig;
            sum /= 10;
        } 
        
        return negative ? -ans : ans;
    }
int main(){

int N = -123;
cout<<reverse(N);


}