#include <bits/stdc++.h>
using namespace ::std;

void GetUniqueElement(int arr[] , int n){
  
// for (int i = 0; i < n; i++)
// {
//    for (int j = i+1; j < n; j++)
//    {
//   if (arr[i] == arr[j])
//   {
//     int actual  = i+1;
//  cout<<actual<<endl;
//   }
//    }
// }


// map<int , int>hash;
// for (int i = 0; i < n; i++)
// {
//   hash[arr[i]]++;
// }

// for (int i = 0; i < n; i++)
// {
//   if (hash[arr[i]]>1 )
//   {
//     cout<<i;
//     break;
//   }
  
// }

// cout<<"-1"<<endl;

while (arr[0] != arr[arr[0]])
{
swap(arr[0] , arr[arr[0]]);
}




}

int main(){

int arr[] ={1, 2,4,3,4};
int size = sizeof(arr)/sizeof(int);

GetUniqueElement(arr, size);

for (int i = 0; i < size; i++)
{
  cout<<arr[i]<<endl;
}



}