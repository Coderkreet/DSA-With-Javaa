#include <bits/stdc++.h>
using namespace ::std;
void reverseARR(int arr[] , int size){
int left = 0;
int right = size-1;

// for (int i = size-1; i >= 0; i--)
// {
//     cout<<arr[i] <<endl;
// }

while ( left <= right)
{
    int temp = arr[left];    
    arr[left] = arr[right]; 
    arr[right] = temp;

    left++;
    right--;
}

}

void DisplayArr(int arr[] , int s){
for (int i = 0; i < s; i++)
{
    cout<<arr[i]<<endl;
}


}

int main(){
int arr[]= {1,2,3,4,5};
 int size = sizeof(arr)/sizeof(int);
reverseARR(arr , size);
DisplayArr(arr , size);
 
}