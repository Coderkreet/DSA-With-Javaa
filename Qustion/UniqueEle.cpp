#include <bits/stdc++.h>
using namespace ::std;

void GetUniqueElement(int arr[] , int n){
    int ans = 0;
for (int i = 0; i < n; i++)
{
    ans = ans ^ arr[i];   
}
cout<<ans;
}

int main(){

int arr[] ={1,2,3,4,1,2,3};
int size = sizeof(arr)/sizeof(int);

GetUniqueElement(arr, size);


}