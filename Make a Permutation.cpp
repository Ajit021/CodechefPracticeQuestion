#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		int count=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(i>=1)
			{
			if(a[i]-a[i-1]!=1)
			{
				 count++;
				 a[i]=a[i]-(a[i]-a[i-1]);
			}
			 
			}
			  
		}
		
		cout<<count<<"\n";
		
	}
}
