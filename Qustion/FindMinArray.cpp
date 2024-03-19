#include <bits/stdc++.h>
using namespace ::std;
void MinNum(int arr[] , int size){
// int max = INT_MIN;
int max = 0;
int min = 100;
// int min = INT_MAX;

  for (int i = 0; i < size; i++)
  {
    if (min > arr[i])
    {
        min = arr[i];
    }
    if (max < arr[i])
    {
        max = arr[i];
    }
    
    
  }
  cout<<min<<endl;
  cout<<max<<endl;

}




int main(){

int arr[] ={1,2,7,90,5,6};
int size = sizeof(arr)/sizeof(int);

MinNum(arr , size);

}