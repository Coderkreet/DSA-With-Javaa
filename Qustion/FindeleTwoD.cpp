#include <bits/stdc++.h>
using namespace ::std;
void findNumberIndex(vector<vector<int>> & v , int ind){

int n = v.size();
int m = v[0].size();

int totalsize = m*n;
int st = 0;
int end = totalsize -1;
while (st <= end)
{
    int mid = st + (end-st)/2;
    int row = mid /m;
    int col = mid % m;

    if (v[row][col] == ind)
    {
        cout<<"fount at "<<row<<col<<endl;
        return;
    }
    else if (v[row][col] > ind)
    {
        end = mid-1;
    }
    else
    {
        st = mid +1;
    }

}
cout<<"not found"<<endl;

}


int main(){
vector<vector<int>>v {{1,2,3}, {4,5,6} ,{7,8,9}, {10,11,12}, {12,14,15} , {16,17,18}};
int index = 12;
findNumberIndex(v , index);


}