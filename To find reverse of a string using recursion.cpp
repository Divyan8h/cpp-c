#include <bits/stdc++.h>
using namespace std;
void reverse(string s)
{ 
    if(s.length()==0)
    {
        return;
    }
    string as=s.substr(1);
    reverse(as);
    cout<<s[0];
}

int main() 
{
   
  reverse("apple");
    
   return 0;
}
