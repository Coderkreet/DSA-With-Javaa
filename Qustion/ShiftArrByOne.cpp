#include <bits/stdc++.h>
using namespace ::std;
void ShiftByOne(int arr[] , int n){
int last = arr[n-1];

for (int i = n-1; i >= 1; i--)
{
    arr[i] = arr[i-1];
}
arr[0] = last;

}

int main(){
int arr[] = {1,2,3,4,5,4,5,3,1,3};
int size = sizeof(arr)/sizeof(int);

ShiftByOne(arr , size);

for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<endl;
}

}