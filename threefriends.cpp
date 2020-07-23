#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
	ll  t;
	cin>>t;
	while(t--)
	{
		ll  a,b,c;
		cin>>a>>b>>c;
		if(a+b==c)
		{
			cout<<"yes\n";
		}
		else if(a+c==b)
		{
			cout<<"yes\n";
		}
		
		
		else if(b+c==a)
		{
		  cout<<"yes\n";	
		}
		
		
		else {
			cout<<"no\n";
		}
	}
}
		
		
		
		
		
		
		
