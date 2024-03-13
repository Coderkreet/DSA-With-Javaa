#include <bits/stdc++.h>
using namespace ::std;
void numberpyramid(int S){

for (int i = 0; i < S; i++)
{
  
for (int k = 0; k < S-i; k++)
{
    cout<<"  ";
}
    int count = i-1;
for (int j = 0; j < i*2-1; j++)
{ 

if (j <= (i*2-1)/2)
{
    cout<< j+1<<" " ;
}
else
{
    cout<< count<<" ";
    count--;
}


}
cout<<endl;



}


}


int main(){
int N = 10;

numberpyramid(N);

}