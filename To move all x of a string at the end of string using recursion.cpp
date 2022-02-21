#include <iostream>
using namespace std;

void moveallx(string s)
{
    if(s.length()==0)
    {
        return;
    }
    
    if(s[0]=='x')
    {
        moveallx(s.erase(0,1));
        s[s.length()]='x';
        cout<<s[s.length()];
    }
    else
    {
        cout<<s[0];
        moveallx(s.substr(1));
    }
    
}

int main()
{
    moveallx("axxbdxcefxhix");
    return 0;
}
