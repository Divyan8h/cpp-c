#include <bits/stdc++.h>
using namespace std;

int firstoccurence(int a[],int n,int i,int key)
{ 
    if(n==i)
    {
        return -1;
    }
    
    if(a[i]==key)
    {
        return i;
    }
    return firstoccurence(a,n,i+1,key);
}

int main() 
{
    int a[7]={4,2,1,2,5,2,7};
   cout<<firstoccurence(a,7,0,2)<<endl;
    
   return 0;
}
