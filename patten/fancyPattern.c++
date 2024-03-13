#include <bits/stdc++.h>
using namespace ::std;


void facnypattern1(int size){

for (int i = 0; i < size; i++)
{
    int num_of_ind = 8-i;
    int num = i+1;
    int count = num;

    for (int j = 0; j < 17; j++)
    {
        if (j == num_of_ind &&  count>0 )
        {
           cout<<num;
           num_of_ind +=2;
           count--;
        }
        else
        {
            cout<<"*";
        }


    }
    cout<<endl;
    
}


}
int main(){

int n = 5;

facnypattern1(n);

}