#include <bits/stdc++.h>
using namespace std;

int clearbit(int n, int pos)
{
    return(n & (~(1<<pos)));
}

int main() 
{
    cout<<clearbit(5,2)<<endl;
    return 0;
}
