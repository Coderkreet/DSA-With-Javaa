#include <bits/stdc++.h>
using namespace ::std;

void PrintPair(int arr[] , int n){

for (int i = 0; i < n; i++)
{
    
    for (int j = i; j < n; j++)
    {
        cout<<"["<<arr[i]<<" , "<<arr[j]<<"]  = "<<arr[i]+arr[j]<<endl;
    }
    
cout<<" "<<endl;
}



}

int main(){

int arr[] = {10,20,30};
int size = sizeof(arr)/sizeof(int);

PrintPair(arr , size);
}