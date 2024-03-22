#include <bits/stdc++.h>
using namespace ::std;

void displayvactor( vector<int>v){

// traditional mathod of printing 

// for (int i = 0; i < v.size(); i++)
// {
//  cout<<v[i]<<endl;
// }


// vactor actual method for pinting

for(auto It : v){

    cout<<It<<endl;
}

}
int main(){

// int n;
// cin>>n;

vector<int> v;

  
// for the pushing element 

// for (int i = 0; i < n; i++)
// {
//   int d;
//   cin>>d;
//   v.push_back(d);
// }



v.push_back(3);
v.push_back(4);
v.push_back(5);
v.push_back(7);
v.push_back(8);


// cout<<v.capacity();     // for the capacity check

v.clear();

v = {1,2,3,45,6};

// cout<< v.at(4) <<endl;   //spesific index

cout<< v[v.size()-1] <<endl;     // font index

// displayvactor(v);

}