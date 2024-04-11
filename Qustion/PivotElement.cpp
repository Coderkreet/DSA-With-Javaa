#include <bits/stdc++.h>
using namespace ::std;

void pivotelement(vector<int> & v){
int st = 0;
int ed = v.size();
int ans = 0;
while (st<ed)
{
    int mid = st + (ed -st)/2;
    if (v[mid] > v[0])
    {
       st = mid+1;
    }
    else
    {
        ed = mid;
    }
}
cout<<st;
}

// 292909 muskan password
int main(){
vector<int> v{7,8,9,1,2,3,5}; 
pivotelement(v);

}