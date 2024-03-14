#include <bits/stdc++.h>
using namespace ::std;
void KthBit(int n , int k){

int val = 1<<k;
int ans = n | val;

cout<<ans<<endl;

}

int main(){

int N = 10;
int K = 2;

KthBit(N , K);

}