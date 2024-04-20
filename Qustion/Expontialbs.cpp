#include <bits/stdc++.h>
using namespace ::std;

int bs(vector<int>v , int s , int e , int tr){

    while (s<=e)
    {
      int mid = s +(e-s)/2;
    if (v[mid] == tr)
    {
        return mid;
    }
    if(v[mid] > tr){
        e = mid-1;
    }
    else{
        s = mid +1;
    }
    
    }
return -1;
}






int exponential_Search(vector<int>v , int t){
if (v[0] == t)
{
  return 0;
}

int i = 0;  int j = 1;

while (v[j] < t)
{
    i = j;
    j*=2;
}
int st = i;
int ed = j;

return bs(v , st , ed , t);

}

int main(){

vector<int> v = {1,2,3,4,5,6,11,12,13,15,23,100};
int target = 12;

int ans = exponential_Search(v , target);
cout<<ans<<endl;

}