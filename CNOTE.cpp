#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
  main()
{
	ll  t;
	cin>>t;
	while(t--)
	{
		
		
		ll  n,x,y,k,f=0;
		cin>>x>>y>>k>>n;
		
		x=x-y;
		
		ll  p[n],c[n];
		
		for(ll  i=0;i<n;i++)
		cin>>p[i]>>c[i];
		
	
		
	
		if(x<=0)
		 {
		 	f=1;
		    cout<<"LuckyChef\n";
			break; 	
		 }
		 
		for(ll  i=0;i<n;i++)
		{
			if(c[i]<=k&&p[i]>=x)
			     {
			     	//cout<<c[i]<<" "<<p[i]<<" "<<x<<"\n";
			        f=1;
			       cout<<"LuckyChef\n";
			       break;
			       
		          }
		}
		
		
		if(f!=1)
		  cout<<"UnluckyChef\n";
		
			
	
		 
		
		
			
		
		
		
	}
}
