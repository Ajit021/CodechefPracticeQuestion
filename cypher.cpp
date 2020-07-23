#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int   main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
	ll  n,ma,q;
	cin>>n>>ma>>q;
	ll  a[n];
	for(ll  i=1;i<=n;i++)
	{
		cin>>a[i];
    }
    
    
    while(q--)
    {
    
		 
		 
		    ll l,r;
		    cin>>l>>r;
		    	if(ma<60)
    	 {
    	 	cout<<"Sad\n";
		 }
		   else  if(l==r)
		    {
		    	if(ma>a[l])
		    	 {
		    	 	cout<<"Happy\n";
				 }
				 else
				  cout<<"Sad\n";
			}
			else
			 {
			 	 int max=*max_element(a+l,a+r);
			 	 	if(ma>max)
		    	 {
		    	 	cout<<"Happy\n";
				 }
				 else
				  cout<<"Sad\n";
			 }
		      
		 }
	}

