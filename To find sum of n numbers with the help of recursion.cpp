#include <bits/stdc++.h>
using namespace std;

int sumofn(int n)
{
    if(n==0)
    {
        return 0;
    }
    
    int prevsum=sumofn(n-1);
    return n + prevsum;
}

int main() 
{
    int n;
    cin>>n;
    cout<<sumofn(n);
    
   return 0;
}
