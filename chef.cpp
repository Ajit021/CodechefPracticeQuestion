#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f=0;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		ll a[n],b[n];
		for(ll i=0;i<n;i++)
		{
			cin>>a[i]>>b[i];
		}
		while(m--)
		{
			ll k;
			cin>>k;
			f=0;
			for(ll i=0;i<n;i++)
			{
				if(k<=a[i]&&k<b[i])
				{
					cout<<"0"<<"\n";
					f=1;
					break;
				}
				else if(k+1<=a[i]&&k<b[i])
				{
					cout<<a[i]-k<<"\n";
					f=1;
					break;
					
				}
				

			}
			
			if(f==0)
			
						
				 {
				 	cout<<"-1"<<"\n";
				break;
				 }
			
		}
	}
}
