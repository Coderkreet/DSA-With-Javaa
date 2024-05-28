#include <bits/stdc++.h>
using namespace ::std;

int BreakRoad(int num , int x , int y , int z){
if (num == 0)
{
    return 0;
}
if (num<0)
{
    return INT_MIN;
}



int ans1 = BreakRoad(num-x , x,y,z) +1 ;
int ans2 = BreakRoad(num-y , x,y,z) +1 ;
int ans3 = BreakRoad(num-z , x,y,z) +1 ;

int ans = max(ans1 , max(ans1,ans2));
return ans;

}
int main(){
int num = 7;
int x = 5;
int y =2;
int z = 2;
int ans = BreakRoad(num,x,y,z);

if (ans <0)
{
    ans =0;
}



}