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
		ll  a[n+1],b[n+1];
		a[0]=0;
		for(ll  i=1;i<=n;i++)
		{
		   cin>>b[i];
		   //a[i]=a[i]+a[i-1];
		}
		
		for(ll  i=1;i<=n;i++)
		{
		   cin>>a[i];
		   a[i]=a[i]+a[i-1];
		}
		
			  for(int i=1;i<=n;i++)
	    cout<<a[i]<<" ";
		
//		if(a[n]%2==0&&a[n]%3==0)
//		{
//			cout<<"TAK"<<"\n";
//		}
//		else
//		 cout<<"NIE"<<"\n";
		
	}
}
