#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int count=0;
   for(int i=0;i<40;i++)
   {
       if(i%5==0 || i%7==0)
       {
           count++;
       }
       else if(i%5==0 && i%7==0)
       {
           count--;
       }
      
   }
    cout<<count;
   return 0;
}
