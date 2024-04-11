#include <bits/stdc++.h>
using namespace ::std;
// void findNonDuplicate(vector<int>v){
// int st = 0;
// int ed = v.size()-1;


// while (st<=ed)
// {
//     int mid = st+(ed-st)/2; 

// if(v[mid +1] != v[mid] && v[mid -1] != v[mid]){

// cout<<mid<<endl;
// break;
// }
// else if (v[mid+1] == v[mid])
// {
//     st = mid+2;
// }
// else
// {
//     ed = mid -2;
// }
// }
// }

void findNonDuplicate(vector<int>v){

 int st = 0;
 int ed = v.size()-1;

 while (st<=ed)
 {
    int mid = st + (ed-st)/2;

    if (st == ed)
    {
        cout<<st<<endl;
       return;
    }
    else if(mid%2 == 0)
    {
       if (v[mid] == v[mid+1])
       {
        st = mid +2;
       }
       else
       {
        ed = mid;
       }
    }
    else
    {
        if (v[mid] == v[mid-1])
        {
            st = mid -1;
        }
        else{
            ed = mid-1;
        }
        
        
    }
 }
}


int main(){

vector<int> v {1,1,2,2,60,60,3,3,4,5,5};

findNonDuplicate(v);
}