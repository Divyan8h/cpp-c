#include <iostream>

using namespace std;

int main()
{
     int n,m,k;
    cin>>n>>m>>k;
    int a[n][m];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           cin>>a[i][j];
        }
        
    }
    int r=0;
    int c=m-1;
    
    bool flag=false;
    while(r<n && c>=0)
    {
        if(a[r][c]==k)
        {
            flag=true;
        }
        
        if(a[r][c]>k)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    
    if(flag)
    {
        cout<<"element found";
    }
    else
    {
        cout<<"element not found";
    }
    return 0;
}
