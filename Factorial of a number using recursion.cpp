#include <bits/stdc++.h>
using namespace std;

int power(int n)
{
    if(n==0)
    {
        return 1;
    }
    
    int multiple=power(n-1);
    return n*multiple;
}

int main() 
{
    int n;
    cin>>n;
    cout<<power(n);
    
   return 0;
}
