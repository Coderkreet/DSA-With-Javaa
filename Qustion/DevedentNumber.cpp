#include <bits/stdc++.h>
using namespace ::std;
void FindDevedentNumber(int n , int divesor ){
int st = 0;
int ed = abs(n);

int ans = 0;

while (st<=ed)
{
    int mid = st+(ed-st)/2;
    if (abs(mid * divesor) <= abs(n))
    {
        ans = mid;
       st = mid +1;
    }
    else if(abs(mid * divesor) > abs(n))
    {
        ed = mid -1;
    }
   

}

if ((n<0 && divesor<0) || (n>0 && divesor>0) )
{
    cout<<ans;
}
else
{
    cout<< -ans;
}



}


int main(){

int n = -2147483648;
int divesor = -1;

cout<<n<<endl;


// FindDevedentNumber(n , divesor);

}