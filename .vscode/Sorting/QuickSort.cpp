#include <bits/stdc++.h>
using namespace ::std;


int Partation(int *arr , int st , int ed){
int PivotIndex = st;
int PivotElement = arr[st];

//  Right position of pivot elem
int count = 0;

for (int i = st+1; i <= ed; i++)
{
    if (arr[i] <= PivotElement)
    {
        count++;
    }
}
int rightIndex = st + count;
swap(arr[PivotIndex] , arr[rightIndex]);
PivotIndex = rightIndex;

//  Chelck All left elemet is small and right is big
int i = st;
int j = ed;

while ( i < PivotIndex && j > PivotIndex)
{
 while (arr[i] <= PivotElement)
 {
    i++;
 }

 while (arr[j] > PivotElement)
 {
    j--;
 }

 if (i < PivotIndex && j > PivotIndex)
 {
   swap(arr[i] , arr[j]);
 }  
}

return PivotIndex;
}

void QuickSort(int* arr , int st , int ed){

if (st >= ed)
{
    return;
}

//  Partation Logic
int p = Partation( arr , st , ed);


// Recutsive Logic

QuickSort(arr , st , p-1);
QuickSort(arr , p+1 , ed);

}

int main(){
int arr[] = {8 , 1,20 , 30, 6,5,60,5};
int size = sizeof(arr)/sizeof(int);
int st = 0;
int ed = size-1;

QuickSort(arr , st , ed);

for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
}


}