#include <bits/stdc++.h>
using namespace std;


void nextPermutation(vector<int> num){
int n = num.size();
int i = n-2;

while (i >= 0 && num[i] >= num[i+1])
{
    i--;
}

if (i >= 0)
{
   int j = n-1;
while (j >= 0 && num[j] <= num[i])
{
    j--;
}

swap(num[i],num[j]);

}
reverse(num.begin() + i + 1, num.end());


}

int main() {
    vector<int> nums = {1,2,3};

    nextPermutation(nums);

    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
