#include <bits/stdc++.h>
using namespace ::std;

void hollowfulPyramid(int size){

for (int row = 0; row < size; row++)
{
    for (int i = 0; i < size-row; i++)
    {
        cout<<"  ";
    }
    for (int j = 0; j < 2*row-1; j++)
    {
          

       if (row == 0 || j ==0  || row == size-1 || j == 2*row-2)
       {
        cout<<"* ";
       }
       
        else{
            cout<<"  ";
        }
        
       }
    cout<<endl;
    }
}


int main(){
int n = 5;

hollowfulPyramid(n);


}

