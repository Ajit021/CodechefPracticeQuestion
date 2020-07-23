#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll check(ll a[],ll A,ll B)
{
	ll v=A;
	ll W=B;
	int count=0;
	for(int i=1;i<=v;i++)
	{
	  	if(W<i)
	  	{
	  		count++;
	  		W=a[i];
	  	}
		
	}
	
	return count;
	
	
	
}






main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
    int count=0,Pr=0;
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		int c=n-1;
		ll a[n],p[n-1];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			if(c>0) 
			 {
			 cin>>p[i];
			 c--;
		    }
		}
		
	/*	for(int i=1;i<n;i++)
		{
			cin>>p[i];
		}*/
		
		ll q,A,B;
		cin>>q;
		
		
		while(q--)
		{
		cin>>A>>B;
		if(count==0)
		 {
		 	 A=0^A;
		 	 B=0^B;
		 	 
		 	 Pr=check(a,A,B);
		 	 cout<<Pr+1<<"\n";
		 	 count++;
		 }
		 else
		 {
		 	 A=Pr^A;
		 	 B=Pr^B;
		 	 
		 	 Pr=check(a,A,B);
		 	 cout<<Pr+1<<"\n";
		 	 count++;
		 	
		 }
		 
		 
		 
	   }
		
		
		
		
		
	}	
	
	
	
}
