#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;



int findMissingNumber(const std::vector<int>& arr) {
    if (arr.empty()) return -1; // Handle empty array case

    std::unordered_set<int> seen;
    int maxElement = arr[0];

    // Find the maximum element and populate the hash set
    for (int num : arr) {
        seen.insert(num);
        if (num > maxElement) maxElement = num;
    }

    // Check from 1 to maxElement to find the missing number
    for (int i = 1; i <= maxElement; ++i) {
        if (seen.find(i) == seen.end()) {
            return i;
        }
    }

    // If no number is missing in the sequence from 1 to maxElement
    return -1;
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
