#include<bits/stdc++.h>
using namespace std;

main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int t;
		cin>>t;
		int a[t];
		int m=0;
		for(int i=0;i<t;i++)
		{
			cin>>a[i];
			
			m=m^(a[i]+a[i]);
		}
		
		cout<<m<<"\n";
	}
}
