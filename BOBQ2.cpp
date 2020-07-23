#include<bits/stdc++.h>
using namespace std;
struct food
{
	int l;
};
bool compare(food a,food b)
{
	return a.l>b.l;
	
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
	
		int n,m,k;
		cin>>n>>m>>k;
		food v[n];
		for(int i=0;i<n;i++)
		{
		  cin>>v[i].l;
		}
		
		sort(v,v+n,compare);
		for(int i=0;i<n;i++)
		 cout<<v[i].l;
		int sum=0;
		for(int i=0;i<n;i+=k+1)
		{
			sum+=v[i].l;
		}
		cout<<sum;
		
		
		
		
		
	}
}
