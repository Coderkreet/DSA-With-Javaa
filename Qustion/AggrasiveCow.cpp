#include <bits/stdc++.h>
using namespace ::std;

bool validNumber(int  v[] , int N , int M , int mid){
int booktotal = 0;
int count  = 1;

for (int i = 0; i < N; i++)
{
    if (v[i] > mid )
    {
        return false;
    }
    if(booktotal + v[i] > mid){
        count++;
        booktotal = v[i];
        if (count > M)
        {
            return false;
        }
    }
    else
    {
        booktotal += v[i];
    }
}
return true;

}
int BookAllocation(int v[] , int M , int N){

if (M>N)
{
    return -1;
}


int st = 0;
int ed = accumulate(v , v+N,0);
int ans = -1;
while (st<=ed)
{
    int mid = st + (ed -st)/2;

if (validNumber( v , N , M , mid))
{
   ans = mid ;
   ed = mid -1;
}
else{
    st = mid +1;
}
}

return ans ;
}


int main(){
int  v[] = {10 , 1 , 2 , 7 , 5};
int M = 3;
int size = sizeof(v)/sizeof(int);

cout<<BookAllocation(v , M , size);

}