#include <bits/stdc++.h>
using namespace ::std;

bool searcharr(vector<int>v , int s , int e, int t){
if (s>e)
    return false;

int mid = s + (e-s)/2;



if(v[mid] == t)
return true;


if (v[mid] < t)   // 4 < 2
{
return searcharr(v , mid+1 ,e,t);
}
else{
 return searcharr(v , s ,mid-1,t);
}


}

int main(){
vector<int>v{1,2,3,4,5,6};
int target = 0;
int s = 0;
int e = v.size()-1;

cout<<searcharr(v , s ,e,target);


}