#include <bits/stdc++.h>
using namespace ::std;

void hollowFullDiamand(int size){

for (int i = 0; i < size; i++)
{
    for (int k = 0; k < size-i; k++)
    {
        cout<<" ";
    }
    for (int j = 0; j < i+1; j++)
    {
        if (j == 0 || j == i+1-1)
        {
         cout<<"* ";
        }
        else
        {
            cout<<"  ";
        }
    }
    
    cout<<endl;
}

for (int i = 0; i < size; i++)
{
    for (int k = 0; k < i; k++)
    {
        cout<<" ";
    }
    for (int j = 0; j < size-i; j++)
    {
        if (j == 0 || j == size-i-1)
        {
         cout<<"* ";
        }
        else
        {
            cout<<"  ";
        }
    }
    
    cout<<endl;
}


}
int main(){

int N = 5;

hollowFullDiamand(N);
}