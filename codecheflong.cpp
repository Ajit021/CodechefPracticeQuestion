#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{ll t;
cin>>t;
while(t--)
{
	ll a,b,k;
	cin>>a>>b>>k;
	if(((a+b)/k)%2==0)
	 {
	 	cout<<"CHEF"<<"\n";
	 }
	 else
	   cout<<"COOK"<<"\n";
}
}
