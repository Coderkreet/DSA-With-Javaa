#include <bits/stdc++.h>
using namespace ::std;

int pivotelement(vector<int> & v){
int st = 0;
int ed = v.size()-1;

cout<<"complete"<<endl;


while (st<=ed)
{
    if(st == ed){

    return st;
    }

    int mid = st + (ed-st)/2;
    if ( mid <= ed && v[mid] > v[mid+1])
    {
     return mid;
    }
    if( mid-1 >= st && v[mid] < v[mid -1]){
        return mid-1;
    }
    if (v[st] > v[mid])
    {
        ed = mid-1;
    }
    else
    {
        st = mid+1;
    }
}

return -1;

}


int binarySearch(vector<int>v , int st , int ed , int taret){

while (st<=ed)
{
    int mid = st + (ed - st)/2;
if (v[mid] == taret)
{
    return mid;
}
 if (v[mid]>taret)
{
    ed = mid -1;
}
else{
    st = mid +1;
}
}

return -1;
}
int Searchelemrnt(vector<int> v , int target){
int midele = pivotelement(v);
int ans =0;


if (target >= v[0] && target<= v[midele])
{
    
ans = binarySearch(v , 0 , midele , target);
}
else
{
ans =  binarySearch(v , midele +1, v.size()-1 , target);
}

return ans;

}

// 292909 muskan password
int main(){
vector<int> v{6,7,8,9,1,2,3,4,5}; 
int target = 1;


cout<<Searchelemrnt(v , target);

}