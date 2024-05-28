#include <bits/stdc++.h>
using namespace ::std;
void peintfun(int arr[], int size , int i , int& max){
if (size == 0)
{
    return ;
}

if (arr[i] > max)
{
    max = arr[i];
}

// cout<<arr[i]<<endl;
 peintfun(arr , size-1 , i+1 , max);
}


void peintfunmin(int arr[], int size , int i , int& mini){
if ( i>= size)
{
    return ;
}

mini = min(arr[i] , mini);

cout<<"min : "<<mini<<endl;
 peintfunmin(arr , size-1 , i+1 , mini);
}


int main(){
int arr []= {1,2,33,4000,5};
int size = sizeof(arr)/sizeof(int);
int i =0;
int max = INT_MIN;
int mini = INT_MAX;

// cout<<max<<endl;
peintfun(arr , size , i , max);
peintfunmin(arr , size , i , mini);


cout<<"them maximum elelment is " << max<<endl;

cout<<"them minimum elelment is " << mini<<endl;


}