#include <bits/stdc++.h>
using namespace ::std;

void combination(vector<int>& nums){
    vector<int> arr;
int sum = 0;
for (int i = 0; i < nums.size(); i++)
{
    for (int j = 0; j < i; j++)
    {
        if (nums[i] != nums[j])
        {
            sum++;
        // cout<<nums[i]<<nums[j]<<endl;
        }
        
    }
    
}

cout<<sum<<endl;
}

int main(){

vector<int> arr;

arr = {0,1,0,0,1};

combination(arr);
}