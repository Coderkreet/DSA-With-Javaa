#include <bits/stdc++.h>
using namespace ::std;


int countprime(int n ){
if(n ==0) return 0;

vector<bool>Prime(n , true);

Prime[0] = Prime[1] = false;
int ans = 0;

for (int i = 2; i < n; i++)
{
    if (Prime[i])
    {

    
    ans++;
    int j = 2*i;
    while (j<n)
    {
        Prime[j] = false;
        j+=i;
    }
    }

}

// print all prime number between given range

// for (int i = 0; i < n; i++)
// {
//     if (Prime[i])
//     {
//        cout<<i<<endl;
//     }
    
// }

return ans;

}
int main(){
int n = 21;
 cout<<countprime(n);
}