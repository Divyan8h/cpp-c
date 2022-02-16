#include <bits/stdc++.h>
using namespace std;

int unique(int arr[] , int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
       xorsum=xorsum^arr[i];
    }
    return xorsum;
}

int main() 
{
    int arr[7]={1,2,2,3,1,3,4};
    cout<<unique(arr,7)<<endl;
    return 0;
}
