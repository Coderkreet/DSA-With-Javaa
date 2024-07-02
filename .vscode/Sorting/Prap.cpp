#include <bits/stdc++.h>
using namespace ::std;

void Marge(int *arr , int st , int ed){


int mid = (st + ed)/2;
// find 2 lenth
int len1 = mid - st +1;
int len2 = ed -mid;

// Create two new arrays
int* left = new int[len1];
int* right = new int[len2];
// Putsh all the value in both array



int k = st;

for (int i = 0; i < len1; i++)
{
    left[i] = arr[k];
    k++;
}

// Right Array


 k = mid+1;

for (int i = 0; i < len2; i++)
{
    right[i] = arr[k];
    k++;
}


// marging start

int left_i = 0;
int right_i = 0;
int arr_i = st;

while (left_i < len1 && right_i < len2)
{
    if(left[left_i] < right[right_i]){
        arr[arr_i ++] = left[left_i++];
    }
    else{
        arr[arr_i ++] = right[right_i++];

    }
}

while (left_i < len1)
{
        arr[arr_i ++] = left[left_i++];
}
while (right_i < len2)
{
        arr[arr_i ++] = right[right_i++];
}

}
void MargeSort(int *arr , int s , int e){

if (s >=e)
{
   return;
}

// devide

int mid = (s+e)/2;

MargeSort(arr , s , mid);
MargeSort(arr , mid+1 , e);

// Mearge

Marge(arr , s , e);



}
int main(){

int arr[] = {2,1,4,0,56,5,54,3};
int size = sizeof(arr)/sizeof(int);

int st = 0;
int ed = size-1;

MargeSort( arr , st , ed);


for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
}


}