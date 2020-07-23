#include<bits/stdc++.h>
using namespace std;
typedef long long ll;





int main()
{
	ll t;
	cin>>t;
	while(t>0)
	{
		ll a[5],b[5], h[100],m[100];
		
		memset(h,0,100);
		memset(h,0,100);
		
		for(int i=0;i<5;i++)
		{
			cin>>a[i]>>b[i];
			h[a[i]]++;
			m[b[i]]++;
		}
		
		ll max=*max_element(a,a+5);
		ll min=*min_element(a,a+5);
		ll a1=max-min;
		
		ll max1=*max_element(b,b+5);
		ll min1=*min_element(b,b+5);
		ll b1=max1-min1;
		
		if(b1==2&&a1==2)
		{
		ll count=0;
		for(int i=0;i<5;i++)
		{
			cout<<h[a[i]]<<" ";
			if(h[a[i]]==3)
			 {
			 	 
			 	
			     count++;
			 	break;
			 
			 }
		 
		   	
			 
		}
		
		for(int i=0;i<5;i++)
		{
				cout<<"b   "<<m[b[i]]<<" ";
			if(m[b[i]]==3)
			 {
			 	 
			 	
			 	count++;
			 	break;
			 
			 }
		 
		   	
			 
		}
 
     cout<<count;
      if(count==2)
        cout<<"Yes"<<"\n";
     else
       cout<<"No"<<"\n";
	}
	
	else
       cout<<"No"<<"\n";

		
		
		
		
		
		
		
		
		
		
		
		
		t--;
	}
	return 0;
}
