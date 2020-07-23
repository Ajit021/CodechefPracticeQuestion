#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
	ll  t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll c=0;
		while(n--)
		{
			ll a,b;
			 cin>>a>>b;
			 if(b-a>5)
			 {
			 	c++;
			 }
			 
		}
		cout<<c<<"\n";
	}
}
