#include <bits/stdc++.h>
using namespace std;

int lastoccurence(int a[],int n,int key)
{ 
    if(n==0)
    {
        return -1;
    }
    
    if(a[n]==key)
    {
        return n;
    }
    return lastoccurence(a,n-1,key);
}

int main() 
{
    int a[7]={4,2,1,2,5,2,7};
   cout<<lastoccurence(a,7,2)<<endl;
    
   return 0;
}
