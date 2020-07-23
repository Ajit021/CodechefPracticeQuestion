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
		ll  candy;
		cin>>candy;
		ll  a[n];
		ll  sum=0;
		for(ll  i=0;i<n;i++)
		{
			cin>>a[i];
		    sum+=a[i];
		}
		
		if(sum>candy)
		{
			cout<<"No\n";
		}
		else
		 cout<<"Yes\n";
		
		
		
		
		
	}
}
