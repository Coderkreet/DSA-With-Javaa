#include <bits/stdc++.h>
using namespace ::std;
int squarRoot(int n ){

int st = 0;
int ed = n;
bool index = false;

while (st<= ed)
{
int mid = st + (ed - st) / 2;

if ((mid*mid) <= n)
{
    index = true;
    st = mid+1;
}
else
{
    ed = mid-1;
    index = false;
}
}

return index;
}

int main(){
int n = 9;

double ans = squarRoot(n);

// int presedence = 3;
// double step = 0.1;

// for (int i = 0; i < presedence; i++)
// {

// for (double j = ans; j*j <= n; j = j + step)
// {
//    ans = j;
// }
// step = step /10;
// }

cout<<ans<<endl;

if (ans != 0)
{
 cout<<"true";   
}
else
{
    cout<<"False"<<endl;
}



}