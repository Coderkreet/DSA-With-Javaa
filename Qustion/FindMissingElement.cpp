#include <bits/stdc++.h>
using namespace ::std;

void GetUniqueElement(int arr[] , int n){
  
// visited method


// for (int i = 0; i < n; i++)
// {
//     int index = abs(arr[i]);


//     if (arr[index-1] > 0)
//     {
//         arr[index -1] *= -1;
//     }


// }
// for (int i = 0; i < n; i++)
// {
    
//     if (arr[i]> 0)
//     {
//        cout<<i+1<<endl;
//     }
    
// }

int i =0;
while (i<n)
{
    int index = arr[i] -1;

    if (arr[i] != arr[index])
    {
      swap(arr[i], arr[index]);

    }
    else
    {
        i++;
    }   
}


for (int i = 0; i < n; i++)
{
    if ( arr[i] != i+1)
    {
       cout<<i+1<<endl;
    }
    
}

}

int main(){

int arr[] ={1,2,4,6,6,2};
int size = sizeof(arr)/sizeof(int);

GetUniqueElement(arr, size);

// for (int i = 0; i < size; i++)
// {
//   cout<<arr[i]<<endl;
// }

}