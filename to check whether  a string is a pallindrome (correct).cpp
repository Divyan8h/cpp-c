#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char a[n+1];
    cin>>a;

    bool temp=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[n-1-i])
        {
            temp=0;
            break;
        }
    }
    
    if(temp==true)
    {
        cout<<"It is a pallindrome string";
    }
    else
    {
        cout<<"It is not a pallindrome string";
    }
    return 0;
}
