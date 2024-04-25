#include <bits/stdc++.h>
using namespace ::std;
 bool isPossibleToSplit(vector<int>& num) {
        vector<int>num1;
        vector<int>num2;
        for(int i = 0 ; i<num.size() ; i++){
            if(i%2 == 0){
            num2.push_back(num[i]);
            }
            else{
                num1.push_back(num[i]);
            }
        }

        for(int i = 0 ; i<num1.size();i++){
            if(num1[i] != num2[i]){
                return true;
            }
        }
return false;
    }
int main(){
vector<int> i{1,1,2,2,3,4};
cout<<isPossibleToSplit(i);
}