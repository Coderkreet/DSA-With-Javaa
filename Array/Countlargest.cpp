#include <bits/stdc++.h>
using namespace ::std;

void findlargest(vector<int>nums){

       map<int ,vector<int>>mp;
        for(int i =0 ; i<nums.size(); i++){
              mp[nums[i]].push_back(nums[i]);
        }
          vector<int>ans;
        for(auto it = mp.begin(); it!=mp.end() ; it++ ){
           
        }

        // for(int i = 0 ; i<ans.size(); i++){
        //     cout<ans;
        // }
}


int main(){

vector<int>v{2,2,1,1,1,2,2};

findlargest(v);
}