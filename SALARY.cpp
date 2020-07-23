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
		int sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum=sum+a[i]; 		
		}
		
		int min1=*min_element(a,a+n);
		
		cout<<sum-n*min1<<"\n";
		
		
		
		
		
		
		
	}
}
