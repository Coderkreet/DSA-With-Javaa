#include <bits/stdc++.h>
using namespace ::std;

//     *
//    * *
//   * * *
//  * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *

void Dimound(int size){
for (int i = 0; i < size; i++)
{
    for (int k = 0; k < size -i; k++)
    {
        cout<<" ";
    }
    
    for (int j = 0; j < i; j++)
    {
        cout<<"* ";

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
        cout<<"* ";

    }
    cout<<endl;    
}

}


int main(){
int N = 5;

Dimound(N);

}