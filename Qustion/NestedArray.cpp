#include <bits/stdc++.h>
using namespace std;

void nestedarray(vector<int> v) {
    vector<int> ans;
    unordered_set<int> total;
    ans.push_back(v[0]);
    int val = v[v[0]];
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            if (val == v[j]) {
                ans.push_back(val);
                val = v[val];
                break;
            }
        }
    }

    for (int i = 0; i < ans.size(); i++) {
        if (total.find(ans[i]) == total.end()) {
            total.insert(ans[i]);
            cout << ans[i] << endl;
        }
    }
}

int main() {
    vector<int> v{5, 4, 0, 3, 1, 6, 2};
    nestedarray(v);
    return 0;
}
