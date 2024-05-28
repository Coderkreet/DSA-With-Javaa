#include <bits/stdc++.h>
using namespace std;

void AmericanStandard(const vector<string>& words) {
    string row1 = "qwertyuiop";
    string row2 = "asdfghjkl";
    string row3 = "zxcvbnm";

    for (const string& word : words) {
        string sortedWord = word;
        sort(sortedWord.begin(), sortedWord.end());

        bool inRow1 = all_of(sortedWord.begin(), sortedWord.end(), [&](char c) { return row1.find(c) != string::npos; });
        bool inRow2 = all_of(sortedWord.begin(), sortedWord.end(), [&](char c) { return row2.find(c) != string::npos; });
        bool inRow3 = all_of(sortedWord.begin(), sortedWord.end(), [&](char c) { return row3.find(c) != string::npos; });

        if (inRow1 || inRow2 || inRow3) {
            cout << word << endl;
        }
    }
}

int main() {
    vector<string> words = {"Hello", "Alaska", "Dad", "Peace"};
    AmericanStandard(words);
    return 0;
}
