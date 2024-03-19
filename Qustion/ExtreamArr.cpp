#include <bits/stdc++.h>
using namespace ::std;

void extreamArr(int arr[] , int s){
int left = 0;
int right = s-1;

while (left <= right)
{
    if (left == right)
    {
        cout<<arr[left]<<endl;
    }
else
{
    cout<<arr[left]<<endl;
cout<<arr[right]<<endl;

}

left++;
right --;
}

}
int main(){
int arr[]= {1,2,3,4,5};
int size = sizeof(arr)/sizeof(int);

extreamArr(arr ,size );
}