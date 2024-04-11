#include <bits/stdc++.h>
#include<algorithm> // for the binarysearch algo
#include<vector>    // for vector 
using namespace ::std;

void binarysearch(int arr[] , int index ,int n){
int start = 0;
int last = n-1;

while (start<=last)
{
int mid = (start + last) /2;
if (arr[mid]== index)
{
 cout<<mid<<endl;
 return;
}
else if (arr[mid] < index)
{
   start = mid+1;
}
else{
   last = mid-1;
}
}
cout<<"notfount"<<endl;
}

int main(){
int arr[] = {1,2,3,4,5,6,7,80};
int size = sizeof(arr)/sizeof(int);
int index = 8;

binarysearch(arr , index , size);

// with vector

vector<int>v {1,2,3,4,5,6,7,8};

if (binary_search(arr, arr+size , 3))    // for array
if (binary_search(v.begin(), v.end(), 3))  
{
    cout<<"Found"<<endl;
}
else{
    cout<<"not found "<<endl;
}


}