#include <bits/stdc++.h>
using namespace ::std;

void trapingwater(vector<int>h){

int maxAns =0;

for (int i = 0; i < h.size(); i++)
{
    int Lefthight = h[i];
    for (int j = i+1; j < h.size(); j++)
    {
       int Righthight = h[j];
       int wid = j-i;
       int maxhight = min(Lefthight , Righthight);
       int area = wid * maxhight;
        maxAns = max(area , maxAns);
    }
}

cout<<maxAns;
 


}



int main(){

vector<int> h {5,4,8,3,7};

trapingwater(h);

}