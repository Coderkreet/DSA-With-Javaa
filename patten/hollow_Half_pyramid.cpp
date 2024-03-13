#include <bits/stdc++.h>
using namespace ::std;

void hollow_half_peramid(int size){

for (int row = 0; row < size; row++)
{
    for (int j = 0; j < size; j++)
    {
        
        if (j == 0 || row == 0 )
        {
            cout<<"* ";
        }
        else
        {
            if ( j == size -row-1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
            
            


        }
        
        
    }
    cout<<endl;
    
}



}

int main(){

int n = 5;

hollow_half_peramid(n) ;

}