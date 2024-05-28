#include <bits/stdc++.h>
using namespace ::std;

bool ChekSorted(int arr[],int& n , int i){
if (i>=n)
{
    return true;
}

if (arr[i] < arr[i-1])
{
    return false;
}

ChekSorted(arr, n,i+1);

}


int main(){

int arr[] = {1,2,3,4,5};
int i = 1;
int size = sizeof(arr)/sizeof(int);

cout<<ChekSorted(arr, size,i);
}