#include <bits/stdc++.h>
using namespace ::std;

void missingnumber (vector<int> v){
int start = 0;
int last = v.size()-1;

while (start<=last)
{
    int mid = (start + last) /2;

    if (v[mid] != mid+1 && (mid == 0 || v[mid-1] == mid) )  
    {
       cout<<mid+1;
       break;
    }
    else if (v[mid] <= mid+1)
    {
        start = mid+1; 
    }
    else
    {
        last = mid-1;
    }
    
}
cout<<"not found"<<endl;
}


int main(){
vector<int> v {1,2,3,5,6};

missingnumber(v);

}