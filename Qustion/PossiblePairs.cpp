#include <bits/stdc++.h>
using namespace ::std;
void Pairs(int arr[] , int n){
int sum = 0;
sort(arr , arr+n);
for (int i = 0; i < n; i+=2)
{
   
sum = sum + arr[i];
}

cout<<sum<<endl;
}

int main(){
int arr[] = {1,4,3,2};
int size = sizeof(arr)/sizeof(int);

Pairs(arr, size);

}