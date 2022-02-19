#include <bits/stdc++.h>
using namespace std;

void asscend(int n)
{ 
    if(n==0)
    {
        return;
    }
    cout<<n<<endl;
    asscend(n-1);
    
}

int main() 
{
    int n;
    cin>>n;
  asscend(n);
    
   return 0;
}
