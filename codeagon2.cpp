#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        
    ll q,l,r;
    cin>>q>>l>>r;
    
    ll k=l^r;
    if(k>r)
     {
         cout<<q^(k-r)<<"\n";
     }
     else
       cout<<q^k<<"\n";
    }
}
    
    
