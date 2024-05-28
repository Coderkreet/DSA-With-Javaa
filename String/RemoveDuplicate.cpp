#include <bits/stdc++.h>
using namespace ::std;

void removeduplicate(string s){

    string ans ="";
   int  n = ans.length();
      for (int i = 0; i < s.length(); i++)
      {

if (ans.length() >0)
{
               if( ans[ans.length()-1] == s[i]){
ans.pop_back();
          
        }
        else{
            ans.push_back(s[i]);

        }
}
else
{
            ans.push_back(s[i]);
    
}
      }
      
    //   while(a < ed){
    //     if(s[a] == s[a+1]){
    //         s[a] = 0;
    //         s[a+1] = 0;
    //         a = 0;
    //     }
    //         a++;
         
    //   }

      for (int i = 0; i < ans.length(); i++)
      {
        cout<<ans[i]<<" ";
      }
      

}

int main(){
string s = "abbaca";

removeduplicate(s);
}