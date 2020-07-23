#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int xorPairCount(ll arr[], ll n, ll x)
{
    int result = 0; // Initialize result
 
    // create empty map that stores counts of
    // individual elements of array.
     map<ll, ll> m;
 
    for (ll i=0; i<n ; i++)
    {
        ll curr_xor =  x^arr[i];
 
        // If there exist an element in map m
        // with XOR equals to x^arr[i], that means
        // there exist an element such that the
        // XOR of element with arr[i] is equal to
        // x, then increment count.
        if (m.find(curr_xor) != m.end())
            result += m[curr_xor];
 
        // Increment count of current element
        m[arr[i]]++;
    }
 
 
    // return total count of pairs with XOR equal to x
    return result;
}
 
// driver program
int main()
{ 
   ll t;
   cin>>t;
   while(t>0)
   {
   	ll n;
   	cin>>n;
   	ll a[n];
   	ll e=0,o=0,two=0,zero=0;
   	for(ll i=0;i<n;i++)
   	{
   		 cin>>a[i];
   		   if(  a[i]%2==0)
   		       e++;
   	 
   	     if(a[i]%2!=0)
   		        o++;
   		     
   		    if(a[i]==2)
   		       two++;
   		    if(a[i]==0)
   		      zero++;
   		     
   		 
     }
     
        //ll k=(o*(o-1))/2;
        //ll q=(e*(e-1))/2;
     
       //cout<<o<<e<<xorPairCount(a, n, n);
      // cout<<zero<<two;
     ll p=o+e-zero-two;
     cout<< p-xorPairCount(a, n, 2)<<"\n";
   	
   	
   	t--;
   }
    
    
        
    return 0;
}

