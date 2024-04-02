#include <bits/stdc++.h>
using namespace ::std;
int rowWiseSum(int arr[][3], int row , int col){
int sum = 0;

for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
    cout<<arr[i][j]<<"  ";

    sum += arr[i][j];
    }

    cout<<" total :-"<<sum;
    cout<<endl;
    sum = 0;
    

}


}


int main(){

int row = 4;
int col = 3;

int arr [4][3] ={{1,2,4}, {2,3,5} , {11,22,5},{11,22,12}};

rowWiseSum(arr ,row , col);

}