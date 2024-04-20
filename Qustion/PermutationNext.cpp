#include <bits/stdc++.h>
using namespace ::std;


void nextPermutation(vector<int>  nums) {
    int i = nums.size() - 2;
    // Find the first element which is smaller than its next element
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }
    
    if (i >= 0) {
        int j = nums.size() - 1;
        // Find the first element greater than nums[i]
        while (nums[j] <= nums[i]) {
            j--;
        }
        // Swap the found elements
        swap(nums[i], nums[j]);
    }
    // Reverse the elements from i+1 till the end of the array
    reverse(nums.begin() + i + 1, nums.end());
}


int main(){
vector<int> arr {1,2,3};

nextPermutation(arr);

for (int i = 0; i < arr.size(); i++)
{
    cout<<arr[i]<<" ";
}

}