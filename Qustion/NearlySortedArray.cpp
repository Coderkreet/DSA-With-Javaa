#include <bits/stdc++.h>
using namespace ::std;

void findindex(vector<int> &v , int ind){
int st = 0;
int ed = v.size();

while (st<=ed)
{
    
int mid = st + (ed-st)/2;

if (v[mid] == ind)
{
    cout<<mid;
    break;
}
else if (  v[mid-1] == ind)
{
    cout<<mid-1; 
    break;
}
else if (  v[mid+1] == ind)
{
    cout<<mid+1;
    break;
}
else if (v[mid] > ind)
{
    ed = mid -2;
}
else{

    st = mid+2;
}
}
}

int main(){
vector<int>v{10 ,3, 40 ,20 ,80,90};
int ind = 3;

findindex(v , ind);
}