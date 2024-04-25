#include <bits/stdc++.h>
using namespace ::std;
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> v;

    for (int i = 0; i < m; i++)
    {
        if (nums1[i])
        {
       
        v.push_back(nums1[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
         if (nums2[i])
        {
        v.push_back(nums2[i]);
        }
    }
    

     sort(v.begin() , v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    


    }


int main(){
vector<int> nums1{-1,0,0,3,3,3,0,0,0};
vector<int> nums2{1,2,2};

int m = nums1.size();
int n = nums2.size();
merge(nums1 , m , nums2 , n);

}