#include <bits/stdc++.h>
using namespace ::std;

void FirstZero(int arr[] , int n){

int CounZreo = 0 , CountOne = 0;


for (int i = 0; i < n; i++)
{
  if(arr[i] == 0){
    CounZreo ++;

  }
  if (arr[i] == 1)
  {
    CountOne++;
  }
  
}
cout<<CountOne<<" "<<CounZreo<<endl;

 for (int i = 0; i < n; i++)
 {
    if (i < CounZreo)
    {
        arr[i] = 0;
    }
    else
    {
        arr[i] = 1;
    }   
 }

}


void SecoundApproch(int arr[] , int n){
    int CounZreo  = 0, CountOne = 0;
for (int i = 0; i < n; i++)
{
  if(arr[i] == 0){
    CounZreo ++;

  }
  if (arr[i] == 1)
  {
    CountOne++;
  }
  
}
cout<<CountOne<<" "<<CounZreo<<endl;

int index = 0;

while (CounZreo --)
{
    arr[index] = 0;
    index++;
}
while (CountOne --)
{
    arr[index] = 1;
    index++;
}

    
}

int main(){
int arr[] = {1,1,1,0,0,1,0,0,1,0,0,0,1,0};
int size = sizeof(arr)/sizeof(int);

// FirstZero(arr , size);
SecoundApproch(arr , size);

for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<endl;
}

}