
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s="sncdvvdfnsvkjvjkdfmvcnvweikvnjlavhn";
    int count[26];
    
    for(int i=0;i<26;i++)
    {
        count[i]=0;
    }
    
    for(int i=0;i<26;i++)
    {
        
        count[s[i]-'a']++;
    }
    
    int max=0;
    char ans='a';
    for(int i=0;i<26;i++)
    {
        if(count[i]>max)
        {
            max=count[i];
            ans=i+'a';
        }
    }
    
    cout<<max<<" "<<ans;
    
    return 0;
}
