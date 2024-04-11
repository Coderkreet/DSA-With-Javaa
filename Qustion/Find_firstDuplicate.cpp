#include <bits/stdc++.h>
using namespace ::std;

int FindFirstDuplicate(int arr[] , int n,int  target){
int start = 0;
int last = n-1;
int ans  = -1;

while (start <= last)
{
int mid = (start+last)/2;

if (arr[mid] == target)
{
    ans = mid;
    last = mid-1;

}
else if (arr[mid] > target)
{
   
    last = mid-1;

}
else{
    start = mid+1;

}

}

return ans;

}

int FindLastDuplicate(int arr[] , int n,int  target){
int start = 0;
int last = n-1;
int ans  = -1;

while (start <= last)
{
int mid = (start+last)/2;

if (arr[mid] == target)
{
    ans = mid;
    start = mid+1;

}
else if (arr[mid] > target)
{
   
    last = mid-1;

}
else{
    start = mid+1; 

}

}

return ans;

}


void totalDuplicaate(int arr[] , int size ,int  targetval){

int last = FindLastDuplicate(arr , size , targetval);
int first = FindFirstDuplicate(arr , size , targetval);

// cout<<first<<endl;
// cout<<last<<endl;
 
cout<< last - first +1;


}

int main(){
int arr[] = {1,2,4,4,4,4,4,4,4,4,4,4,4,5};
// vector<int>v{1,2,4,4,4,4,4,5};
int size = sizeof(arr)/sizeof(int);
int targetval = 4;

FindFirstDuplicate(arr , size , targetval);
// auto a =  upper_bound(v.begin() , v.end() , 4);

// cout<<a-v.begin()<<endl;

FindLastDuplicate(arr , size , targetval);

totalDuplicaate(arr , size , targetval);

return 0;
}