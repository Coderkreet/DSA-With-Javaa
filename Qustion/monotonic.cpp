#include <bits/stdc++.h>
using namespace ::std;
void monotonic(vector<int>v){

int i = 0;
int j =1;
int s = v.size();
if (v[i] <= v[j])
{
    while (j<s)
{
   if (v[i] <= v[j] )
   {
    i++;
    j++;
   }
   else
   {
    cout<<"false";
    break;
   }
}

}
else
{
   
    while (j<s)
{
   if (v[i] >= v[j] )
   {
    i++;
    j++;
   }
   else
   {
    cout<<"false";
    break;
   }
}


}


}


int main(){
vector<int>v{1,1,0};
monotonic(v);
}