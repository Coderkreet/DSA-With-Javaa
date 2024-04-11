#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int findMissingNumber(const vector<int>& arr) {
 int index =arr[0];
 int ans =0;
 for (int i = 0; i < arr.size(); i++)
 {
  if (index!=arr[i])
  {
 ans = index;
 break;
  }
  index++;

 }
 
return ans;

}


int main() {
    int n;
    cin >> n;
 

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int missingNumber = findMissingNumber(arr);
    cout << missingNumber << endl;

    return 0;
}