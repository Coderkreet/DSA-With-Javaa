#include <bits/stdc++.h>
using namespace ::std;


void Addition(int a[], int b[] , int n1 , int n2){
vector<int>Output;

int i = n1-1;
int j = n2 -1;
int carry =0;
while (i>= 0 &&  j >= 0)
{
   int x =  a[i] + b[j] +carry;
    int digit = x%10;
    Output.push_back(digit);
    carry = x/10;
    i--;
    j--;


}
while (i>= 0)
{
   int x =  a[i]+0+carry;
    int digit = x%10;
    Output.push_back(digit);
    carry = x/10;
i--;
}
while (j>= 0)
{
   int x =  0+b[j]+carry;
    int digit = x%10;
    Output.push_back(digit);
    carry = x/10;
j--;
}

if (carry)
{
    Output.push_back(carry);
}

while (Output[Output.size()-1]==0)
{
    Output.pop_back();
}


reverse(Output.begin(), Output.end());

for (int i = 0; i < Output.size(); i++)
{
    
    cout<<Output[i]<<" ";
}


}
int main(){

int arr1[] = {1,2,3,4};
int arr2[] ={0,1,2,3,4};
int size1 = sizeof(arr1)/sizeof(int);
int size2 = sizeof(arr2)/sizeof(int);

Addition(arr1 , arr2, size1 ,size2);
}