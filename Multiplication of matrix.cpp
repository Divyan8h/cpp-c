#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a1[n][m];
    int a2[m][n];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           cin>>a1[i][j];
        }
        
    }
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
       {
            cin>>a2[i][j];
        }
    
    }
    
    int ans[n][n];
        
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            ans[i][j]=0;
        }
        
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
            {
                ans[i][j]+=a1[i][k]*a2[k][j];
            }
        }
        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ans[i][j]<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}
