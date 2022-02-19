#include <bits/stdc++.h>
using namespace std;

void desc(int n)
{ 
    if(n==0)
    {
        return;
    }
    desc(n-1);
    cout<<n<<endl;
    
}

int main() 
{
    int n;
    cin>>n;
    desc(n);
    
   return 0;
}
