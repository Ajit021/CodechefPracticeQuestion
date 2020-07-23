#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
	ll f=0;
main()
{
	
	ll z=300000;
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		stack<ll>a;
		stack<ll>b;
		ll k;
		
		for(ll i=1;i<=n;i++)
		{
			cin>>k;
		   if(i<=n/2)
		     a.push(k);	
		    else
		      b.push(k);
		}
		
		stack<ll>s;
		stack<ll>m;
		stack<ll>q;
	    f=0;
		while(!a.empty()&&!b.empty())
		{
			ll c=a.top();
			a.pop();
			ll d=b.top();
			b.pop();
			cout<<c<<" "<<d<<"\n";
			
			if(c==d)
			{
			 s.push(c);
			 m.push(d);	
			 
			}
			
			else if(c==-1&&d!=-1)
			{
			  s.push(d);
			   m.push(d);	
			}
			else if(c!=-1&&d==-1)
			{
			  s.push(c);
			   m.push(c);	
			}
			else{
				f=1;
			}
		
		}
		
		if(f==1)
			cout<<"NO";
			
			else
			{
				ll sum=0,mul=0;
			   while(!s.empty())
			   {
			   	sum=(sum%z+s.top()%z)%z;
			   	q.push(s.top());
			   	s.pop();
				}	
				
				
				 while(!m.empty())
			   {
			   	sum=(sum%z+m.top()%z)%z;
			   	q.push(m.top());
			   	m.pop();
				}
				
				 while(!q.empty())
			   {
			   	mul=(mul%z+q.top()%z)%z;
		          s.push(q.top());
		          
			   	q.pop();
				}
				
				if(sum==mul)
				{
					cout<<"YES"<<"\n";
							while(!s.empty())
					      {
					       	
					   	 cout<<s.top()<<" ";
					   	s.pop();
						}
						cout<<"\n";	
				
				}
				
				else
				 {
				 	cout<<"NO"<<"\n";
				 }
				
				
				
				
				
				
					
			}
			
			
	//	cout<<"\n";
		
		
		
		
	}
}
