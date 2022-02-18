#include <bits/stdc++.h>
using namespace std;

int power(int n,int m)
{
    if(m==0)
    {
        return 1;
    }
    
    int multiple=power(n,m-1);
    return n*multiple;
}

int main() 
{
    int n,m;
    cin>>n>>m;
    cout<<power(n,m);
    
   return 0;
}
