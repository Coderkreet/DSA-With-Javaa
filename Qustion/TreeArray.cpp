#include <bits/stdc++.h>
using namespace ::std;

    void commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
        
            vector<int> Output;
            int i = 0 , j =0 , k=0;
            while(i<n1 && j<n2 && k < n3){
              if(A[i] == B[j] &&  B[j]== C[k]){
                  Output.push_back(A[i]);
                  i++;
                  j++;
                  k++;
              }  
              else if(A[i] < B[j]){
                  i++;
              }
                else if(B[j] < C[k]){
                  j++;
              }
              else {
                  k++;
              }
            }

            
            for (int i = 0; i < Output.size(); i++)
            {
                cout<<Output[i]<<endl;
                // cout<<"hello"<<endl;
            }
            
            // return Output;
        }

int main(){
int arr1[] = {1,2,3,4,5};
int arr2[] = {11,2,3,41,51};
int arr3[] = {13,2,3,43,53};

int size1 = sizeof(arr1)/sizeof(int);
int size2 = sizeof(arr2)/sizeof(int);
int size3 = sizeof(arr3)/sizeof(int);


commonElements(arr1 , arr2 , arr3 , size1 , size2 ,  size3);


}