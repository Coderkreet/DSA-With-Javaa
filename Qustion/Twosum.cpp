#include <bits/stdc++.h>
using namespace ::std;
  void twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        map<int, int> maped;
        for (int i = 0; i < nums.size(); i++)
        {
            maped.insert(nums[i] , i);
        }
        
    for (int i = 0; i < nums.size(); i++)
    {
        int num = nums[i];
        int rem = target - num;
    }
    

   for (int i = 0; i < ans.size(); i++)
   {
    cout<<ans[i]<<endl;
   }
   
    }
int main(){
vector<int>v{2,7,11,15};
int tar = 9;
twoSum(v , tar);
}