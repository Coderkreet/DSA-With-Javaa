#include <bits/stdc++.h>
using namespace ::std;

void mearge(int *arr , int st , int ed){

int mid = (st + ed) /2;

int LeftLimt = mid -st +1;
int RightLimit = ed - mid;

// Create 2 arr

int* Left = new int[LeftLimt];
int* Right = new int[RightLimit];

// Copy all value
int k = st;
for (int i = 0; i < LeftLimt; i++)
{
    Left[i] = arr[k];
    k++;
}


 k = mid+1;
for (int i = 0; i < RightLimit; i++)
{
    Right[i] = arr[k];
    k++;
}

// Sorting Marging 

int LI = 0;
int RI = 0;
int Rai = st;

while (LI < LeftLimt && RI < RightLimit)
{
  if (Left[LI] < Right[RI])
  {
    arr[Rai++] = Left[LI++]; 
  }
  else
  {
    arr[Rai++] = Right[RI++]; 
    
  }
}

// Left
while (LI < LeftLimt)
{
    arr[Rai++] = Left[LI++]; 
    
}

// right

while (RI < RightLimit)
{
    arr[Rai++] = Right[RI++]; 
    
}

    // Free dynamically allocated memory
    delete[] Left;
    delete[] Right;

}


void margeSort(int* arr , int st , int ed){
    // Base case
if (st >= ed)
{
    return;
}

int mid = st + (ed -st) /2;

// Sorting 

margeSort(arr , st , mid);
margeSort(arr , mid+1 , ed);

// Marging

mearge(arr , st , ed);

}


int main(){
int arr[] = {21,2,5,92,43,90};
// int size = sizeof(arr)/sizeof(int);
int size = 6;
int st = 0;
int ed =size-1;

margeSort(arr, st , ed);

for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
}


}