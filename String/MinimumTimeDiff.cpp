#include <bits/stdc++.h>
using namespace ::std;


void Find_Difference(vector<string>t){

vector<int>minute{1220 , 1355, 1419};

// for (int i = 0; i < t.size(); i++)
// {
// string cur = t[i];

// int h = stoi(cur.substr(0,2));
// int m = stoi(cur.substr(3,2));
// int convert_min = h*60+m;

// minute.push_back(convert_min);
// }


sort(minute.begin(), minute.end());

int mini = INT_MAX;

 for (int i = 0; i < minute.size()-1; i++)
 {
    int diff = minute[i+1] - minute[i];

    mini = min(mini , diff);
 }
 
  

//  Last cmp


int lastcomp = (minute[0] + 24*60 )- minute[minute.size()-1];

    mini = min(mini , lastcomp);

 cout<<mini;





}

int main(){
vector<string> timePoints {"23:59","00:00"};

Find_Difference(timePoints);
}