#include <bits/stdc++.h>
using namespace ::std;


void CommonChar(vector<string>v){
unordered_map<char, int>mp;

 for (const string& s : v) {
        for (char c : s) {
            mp[c]++;
        }
    }
 for (const auto& entry : mp) {
        cout << entry.first << ": " << entry.second << endl;
    }
}

int main(){

vector<string> v{"bella","label","roller"};

CommonChar(v);
}