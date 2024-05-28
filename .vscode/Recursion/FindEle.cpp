#include <bits/stdc++.h>
using namespace ::std;

void FindEle(int arr[] , int& s, int i , int& index , vector<int>&ans , int& c){
if (i >=s)
{
  return ;
}

 if (arr[i] == index)
 {
    ++c;
    ans.push_back(i);
    // cout<<i<<endl;
 }

return FindEle(arr,s,i+1,index,ans,c);

}
int main(){
int arr[] = {1,66,3,66,5,66};
int size = sizeof(arr)/sizeof(int);
int i=0;
int index = 66;
int count =0;
vector<int>ans;
FindEle(arr , size,i , index, ans , count);

for (int i = 0; i < ans.size(); i++ )
{
    cout<<ans[i]<<endl;
}

cout<<"count is " << count;

}
