#include <bits/stdc++.h>
using namespace ::std;


void RowWiseDisplat(int arr[][3] , int row , int col){
for (int i = 0; i < row; i++)
{
 for (int j = 0; j < col; j++)
 {
    cout<<arr[i][j]<<"  ";
 }
 cout<<endl;
 
}
cout<<endl;
}
void ColomnWiseDisplat(int arr[][3] , int row , int col){
for (int i = 0; i < col; i++)
{
 for (int j = 0; j < row; j++)
 {
    cout<<arr[i][j]<<"  ";
 }
 cout<<endl;
 
}
cout<<endl;
}


int main(){

int row = 4;
int col = 3;

int arr [4][3] ={{1,2,4}, {2,3,5} , {11,22,5},{11,22,12}};
int size = sizeof(arr)/sizeof(int);

RowWiseDisplat(arr , row , col);
ColomnWiseDisplat(arr , row , col);







}