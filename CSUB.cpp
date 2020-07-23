#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
	ll  t;
	cin>>t;
	while(t--)
	{
		ll  n;
		cin>>n;
		string s;
		cin>>s;
		ll  count=0;
		ll  sum=0;
		for(ll i=0;i<s.length();i++)
		{
		
				if(s[i]=='1')
				    
				    {
				    	count++;
				    	
					}
		
		}
		
		
	      
		   cout<<(count*(count+1))/2<<"\n";
	}
	
}
