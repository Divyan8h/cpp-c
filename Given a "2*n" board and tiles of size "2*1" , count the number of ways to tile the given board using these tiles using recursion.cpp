#include <iostream>
using namespace std;

int tilecount(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    
    return tilecount(n-1) + tilecount(n-2);
}

int main()
{
    cout<<tilecount(4)<<endl;
    return 0;
}
