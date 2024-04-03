#include <bits/stdc++.h>
using namespace ::std;

 string calc_Sum(int *a,int n,int *b,int m){
   
   string ans;
   int carry = 0;
   int i = n-1;
   int j = m-1;
   
   
   while(i>=0 && j >=0 ){
      int x = a[i] + a[j]+carry;
      int digit = x%10;
      ans.push_back(digit+'0');
      carry = x/10;
      i--;
      j--;
   }
    while(i>=0){
      int x = a[i] + 0+carry;
      int digit = x%10;
      ans.push_back(digit +'0');
      carry = x/10;
      i--;
   }
       while(j>=0){
      int x = a[i] + 0+carry;
      int digit = x%10;
      ans.push_back(digit +'0');
      carry = x/10;
      j--;
   }
   
   if(carry){
       ans.push_back(carry +'0');
   }
   
for (int i = 0; i < ans.size(); i++)
{
    cout<<ans[i]<<"";
}



   return ans;
   
    }

int main(){
int arr1[] = {1,2,3,4};
int arr2[] ={0,1,2,3,4};
int size1 = sizeof(arr1)/sizeof(int);
int size2 = sizeof(arr2)/sizeof(int);
calc_Sum()

}