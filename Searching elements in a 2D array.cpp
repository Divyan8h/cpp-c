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
    
    cout<<"matrix is :"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    bool flag=false;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==k)
            {
                cout<<i<<" "<<j;
                flag=true;
            }
        }
    }
    
    if(flag)
            {
                cout<<"element found\n";
            }
            else
            {
                cout<<"element not found. Try next time.";
            }
    return 0;
}
