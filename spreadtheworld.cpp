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
	  ll  a[n+1];
	  a[0]=0;
	  ll  max=0;
	  ll  k=n;
	  ll  c=1;
	  for(ll  i=1;i<=n;i++)
	  {
	  	cin>>a[i];
	     	 a[i]=a[i]+a[i-1];
	     	 
	     	 
	  }
	  
//	  for(int i=1;i<=n;i++)
//	    cout<<a[i]<<" ";
	  
	  for(ll  i=1;i<=n;i++)
	  {
	  	  k=k-a[i];
	  	 // cout<<" "<<a[i]<<"\n";
	  	  i+=a[i]-1;
	     	 if(k<=1)
	     	  {
	     	 	 max=c;
	     	 	 break;
	     	 	 
			  }
			  c++;
	  }
	  
	  cout<<max<<"\n";
	  
	}
}
