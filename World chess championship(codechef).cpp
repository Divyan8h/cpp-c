#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c=0,n=0,d=0;
        string q;
        cin>>q;
        int x;
        cin>>x;
        for(int i=0;i<14;i++)
        {
           if(q[i]=='C')
           {
               
               c=c+2;
           }
           else if(q[i]=='N')
           {
               n+=2;
           }
           else
           {
               c++;
               n++;
           }
        }
        
        if(c<n)
        {
            cout<<40*x;
        }
        else if(c>n)
        {
            cout<<60*x;
        
        }
        else 
        {
            cout<<55*x;
           
        }
       
        
    }
    
   return 0;
}
