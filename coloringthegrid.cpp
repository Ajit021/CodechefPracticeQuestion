#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
	ll  t;
	cin>>t;
	while(t--)
	{
		ll  n,m;
		cin>>n>>m;
		ll  flag=0;
		char a[n][m];
		ll count=0;
		vector<char>v;
		for(ll  i=0;i<n;i++)
		{
			 for(ll  j=0;j<m;j++)
			 {
			 	  cin>>a[i][j];
			 	  v.push_back(a[i][j]);
			 }
		}
		
		int k=v.size();
		
		for(int i=0;i<v.size();i++)
		{
			if(v[i]=='.')
			{
				 count=1;
				if(i+1<v.size())
				 {
				   	if(v[i+1]=='.')
				   	{
				   	  count++;	
					}
			     }
			     
			     if(i+2<v.size())
				 {
				   	if(v[i+2]=='.')
				   	{
				   	  count++;	
					}
			     }
			     if(i+3<v.size())
				 {
				   	if(v[i+3]=='.')
				   	{
				   	  count++;	
					}
			     }
			     
		    }
		    
		    
		    if(count<4)
		    {
		    	 flag=1;
		    	break;
			}
				 	     
				 
		
		
		
		}
		
		
		
		
		if(flag==1)
		 cout<<"NO\n";
		else
		 cout<<"YES\n";
		
	

   		
		
		
		
		
		
	}
}
